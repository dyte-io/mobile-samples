import 'dart:developer';

import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_core/constants/colors.dart';
import 'package:flutter_core/models/meeting_details.dart';
import 'package:flutter_core/models/participant_details.dart';
import 'package:flutter_core/models/states/room_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/repository/meeting_handler.dart';
import 'package:flutter_core/secrets.dart';
import 'package:flutter_core/ui/meeting/staging_room.dart';
import 'package:flutter_core/ui/widgets/appbar.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class HomePage extends ConsumerStatefulWidget {
  const HomePage({super.key});

  @override
  ConsumerState<HomePage> createState() => _HomePageState();
}

class _HomePageState extends ConsumerState<HomePage> {
  final nameController = TextEditingController();

  final descriptionController = TextEditingController();

  final roomNameController = TextEditingController();

  final meetingRepo = MeetingRepository();

  MeetingDetails? meetingDetails;
  ParticipantTokens? participantTokens;

  @override
  Widget build(BuildContext context) {
    ref.listen<RoomEventStates>(roomEventStateNotifierProvider, (_, next) {
      next.maybeWhen(
        onMeetingInitFailed: (exception) =>
            log("MEETING INIT FAILED EXCEPTION: ${exception.toString()}"),
        onMeetingInitStarted: () => log("MEETING INIT STARTED!!"),
        onMeetingInitCompleted: () {
          Navigator.push(context, MaterialPageRoute(builder: (context) {
            return const StagingRoom();
          }));
        },
        orElse: () {},
      );
    });
    return Scaffold(
      appBar: const DyteAppBar(),
      body: Center(child: _meetingDetails(meetingRoomName)),
    );
    // return Scaffold(
    //   body: SafeArea(
    //     child: SingleChildScrollView(
    //       child: SizedBox(
    //         height: MediaQuery.of(context).size.height,
    //         child: Column(
    //           mainAxisAlignment: MainAxisAlignment.start,
    //           crossAxisAlignment: CrossAxisAlignment.center,
    //           children: [
    //             const SizedBox(height: 10),
    //             SvgPicture.asset(
    //               'assets/dyte_logo.svg',
    //               width: 100,
    //               height: 50,
    //             ),
    //             const SizedBox(height: 20),
    //             const Text(
    //               "Create Meeting",
    //               style: TextStyle(
    //                 fontSize: 24,
    //                 fontWeight: FontWeight.w500,
    //               ),
    //             ),
    //             const SizedBox(height: 10),
    //             Padding(
    //               padding:
    //                   const EdgeInsets.symmetric(vertical: 12, horizontal: 16),
    //               child: _textField(nameController, 'Your Name'),
    //             ),
    //             Divider(
    //               color: Colors.grey.shade300,
    //               thickness: 1,
    //             ),
    //             Padding(
    //               padding:
    //                   const EdgeInsets.symmetric(vertical: 6, horizontal: 16),
    //               child: _textField(
    //                   descriptionController, 'What\'s your meeting about?'),
    //             ),
    //             const SizedBox(height: 10),
    // MaterialButton(
    //   onPressed: () async {
    //     if (nameController.text.isNotEmpty) {
    //       _createMeetingAndAddMe(nameController.text);
    //     }
    //   },
    //   minWidth: 180,
    //   height: 45,
    //   color: DyteColors.dytePrimary,
    //   child: const Text(
    //     "Create Meeting",
    //     style: TextStyle(fontSize: 16),
    //   ),
    // ),
    //             const SizedBox(height: 10),
    //             Padding(
    //               padding:
    //                   const EdgeInsets.symmetric(vertical: 6, horizontal: 16),
    //               child: _textField(roomNameController, 'Room Name'),
    //             ),
    //             const SizedBox(height: 10),
    //             MaterialButton(
    //               onPressed: () async {
    //                 if (nameController.text.isNotEmpty &&
    //                     roomNameController.text.isNotEmpty) {
    //                   _searchRoomAndAddMe(
    //                       nameController.text, roomNameController.text);
    //                 }
    //               },
    //               minWidth: 180,
    //               height: 45,
    //               color: DyteColors.dytePrimary,
    //               child: const Text(
    //                 "Join Room",
    //                 style: TextStyle(fontSize: 16),
    //               ),
    //             ),
    //             const Spacer(),
    //             if (participantTokens != null)
    //               _meetingDetails(meetingDetails!.data.meeting.roomName),
    //             const Spacer(),
    //           ],
    //         ),
    //       ),
    //     ),
    //   ),
    // );
  }

  Future<void> _searchRoomAndAddMe(
      String participantName, String roomName) async {
    final meetingId = await meetingRepo.getMeetingIdFromRoomName(roomName);
    if (meetingId != null) {
      participantTokens =
          await meetingRepo.addAParticipant(participantName, meetingId);
      log(participantTokens!.message);
    }
    setState(() {});
  }

  Future<void> _addLocalUser(
      String participantName, MeetingDetails? meetingDetails) async {
    if (meetingDetails != null) {
      participantTokens = await meetingRepo.addAParticipant(
          participantName, meetingDetails.data.meeting.id);
      log(participantTokens!.message);
    }
    setState(() {});
  }

  Future<void> _createMeetingAndAddMe(String participantName) async {
    meetingDetails = await meetingRepo.createMeeting();
    _addLocalUser(participantName, meetingDetails);
  }

  Widget _meetingDetails(String meetLink) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        GestureDetector(
          onTap: () {
            Clipboard.setData(
                ClipboardData(text: 'https://app.dyte.io/$meetLink'));
          },
          child: Text('https://app.dyte.io/$meetLink'),
        ),
        const SizedBox(height: 10),
        MaterialButton(
          onPressed: () {
            ref.watch(dyteClient).addMeetingRoomEventsListener(
                ref.watch(roomEventStateNotifierProvider.notifier));
            ref.watch(dyteClient).addParticipantEventsListener(
                ref.watch(participantEventStateNotifierProvider.notifier));
            ref
                .watch(dyteClient)
                .addSelfEventsListener(ref.watch(localUserProvider.notifier));
            ref.watch(dyteClient).addPluginEventsListener(
                  ref.watch(pluginEventStateNotifierProvider.notifier),
                );
            ref.watch(dyteClient).init(
                  DyteMeetingInfo(
                    roomName: meetingRoomName,
                    enableAudio: false,
                    displayName: 'Flutter core',
                    authToken: authToken,
                  ),
                );
          },
          minWidth: 180,
          height: 45,
          color: DyteColors.primary,
          child: const Text(
            "Join Meeting",
            style: TextStyle(fontSize: 16),
          ),
        )
      ],
    );
  }

  Widget _textField(TextEditingController controller, String hintText) {
    return TextField(
      controller: controller,
      decoration: InputDecoration(
          focusedBorder: OutlineInputBorder(
              borderSide: BorderSide(color: Colors.grey.shade200)),
          border: const OutlineInputBorder(),
          hintText: hintText),
    );
  }
}
