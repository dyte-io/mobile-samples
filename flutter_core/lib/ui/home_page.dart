
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
        onMeetingInitFailed: (exception) {},
        onMeetingInitStarted: () {},
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
}
