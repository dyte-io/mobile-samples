import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/constants/colors.dart';
import 'package:flutter_core/models/states/local_user_event_states.dart';
import 'package:flutter_core/models/states/participant_event_states.dart';
import 'package:flutter_core/models/states/room_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/home_page.dart';
import 'package:flutter_core/ui/meeting/render_active_participants.dart';
import 'package:flutter_core/ui/widgets/appbar.dart';
import 'package:flutter_core/ui/widgets/dyte_button.dart';
import 'package:flutter_core/ui/widgets/dyte_call_bottom_bar.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

import 'plugins/plugins_screen.dart';

class DyteRoom extends ConsumerStatefulWidget {
  const DyteRoom({Key? key}) : super(key: key);

  @override
  ConsumerState<DyteRoom> createState() => _DyteRoomState();
}

class _DyteRoomState extends ConsumerState<DyteRoom> {
  late List<DyteMeetingParticipant> activeParticipants = [];
  GridPagesInfo? gridPagesInfo;
  late DyteRecordingState recordingState = DyteRecordingState.idle;

  @override
  Widget build(BuildContext context) {
    ref.listen<LocalUserEventStates>(localUserProvider, (previous, next) {
      next.maybeMap(
          onMeetingRoomJoinStarted: (value) async {
            recordingState =
                await ref.watch(dyteClient).recording.recordingState;
          },
          onMeetingRoomJoined: (value) async {},
          orElse: () {});
    });
    ref.listen<RoomEventStates>(roomEventStateNotifierProvider,
        (previous, next) {
      next.maybeMap(
        onMeetingRecordingStateUpdated: (value) async {
          recordingState = await ref.watch(dyteClient).recording.recordingState;
          setState(() {});
        },
        onMeetingRoomLeaveStarted: (value) {},
        onMeetingRoomLeft: (value) => Navigator.pushAndRemoveUntil(
          context,
          MaterialPageRoute(
            builder: (context) => const HomePage(),
          ),
          (route) => false,
        ),
        orElse: () {},
      );
    });

    ref.listen<ParticipantEventStates>(participantEventStateNotifierProvider,
        (_, next) {
      next.maybeMap(
        onGridUpdated: (res) {
          gridPagesInfo = res.gridPagesInfo;
          setState(() {});
        },
        orElse: () {},
      );
    });

    return Scaffold(
      appBar: DyteAppBar(
        action: Row(
          children: [
            IconButton(
              onPressed: () {
                if (gridPagesInfo != null) {
                  gridPagesInfo!.isPreviousPagePossible
                      ? ref
                          .watch(dyteClient)
                          .setPage(gridPagesInfo!.currentPageNumber - 1)
                      : null;
                }
              },
              icon: Icon(
                Icons.arrow_back_ios_rounded,
                color: gridPagesInfo != null &&
                        gridPagesInfo!.isPreviousPagePossible
                    ? Colors.white
                    : Colors.grey,
              ),
            ),
            IconButton(
              onPressed: () {
                gridPagesInfo!.isNextPagePossible
                    ? ref
                        .watch(dyteClient)
                        .setPage(gridPagesInfo!.currentPageNumber + 1)
                    : null;
              },
              icon: Icon(
                Icons.arrow_forward_ios_rounded,
                color:
                    gridPagesInfo != null && gridPagesInfo!.isNextPagePossible
                        ? Colors.white
                        : Colors.grey,
              ),
            ),
            IconButton(
              onPressed: () async {
                List<DytePlugin> plugins =
                    await ref.watch(dyteClient).plugins.all;
                if (mounted) {
                  Navigator.push(
                      context,
                      MaterialPageRoute(
                        builder: (context) => PluginsScreen(plugins: plugins),
                      ));
                }
              },
              icon: const Icon(
                Icons.rocket_launch_outlined,
                color: Colors.white,
              ),
            ),
            IconButton(
              onPressed: () async {
                if (recordingState == DyteRecordingState.idle) {
                  ref.watch(dyteClient).recording.start();
                } else if (recordingState == DyteRecordingState.recording) {
                  ref.watch(dyteClient).recording.stop();
                } else {}
              },
              icon: Icon(recordingState == DyteRecordingState.idle
                  ? Icons.circle
                  : recordingState == DyteRecordingState.recording
                      ? Icons.rectangle_rounded
                      : Icons.circle_outlined),
            ),
            DyteButton(
              label: 'Leave',
              size: const Size(80, 30),
              color: DyteColors.red,
              onPressed: () {
                ref.watch(dyteClient).leaveRoom();
                ref.watch(dyteClient).removePluginEventsListener(
                    ref.watch(pluginEventStateNotifierProvider.notifier));
                Navigator.pushAndRemoveUntil(
                  context,
                  MaterialPageRoute(
                    builder: (context) => const HomePage(),
                  ),
                  (route) => false,
                );
              },
            ),
          ],
        ),
      ),
      bottomNavigationBar: const DyteCallBottomBar(),
      body: const RenderActiveParticipants(),
    );
  }
}
