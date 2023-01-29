import 'package:flutter/material.dart';
import 'package:flutter_core/models/states/local_user_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/router/app_router.dart';
import 'package:flutter_core/ui/meeting/chats/dyte_chat_page.dart';
import 'package:flutter_core/ui/meeting/participant_screen.dart';
import 'package:flutter_core/ui/meeting/poll/poll_screen.dart';
import 'package:flutter_core/ui/meeting/settings/settings_screen.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class DyteCallBottomBar extends ConsumerStatefulWidget {
  const DyteCallBottomBar({Key? key}) : super(key: key);

  @override
  ConsumerState<ConsumerStatefulWidget> createState() =>
      _DyteCallBottomBarState();
}

class _DyteCallBottomBarState extends ConsumerState<DyteCallBottomBar> {
  @override
  Widget build(BuildContext context) {
    ref.listen<LocalUserEventStates>(localUserProvider, (previous, next) {
      next.maybeWhen(
        onUpdate: (participant) {
          setState(() {});
        },
        onVideoUpdate: (videoEnabled) => setState(() {}),
        onAudioUpdate: (audioEnabled) => setState(() {}),
        orElse: () {},
      );
    });
    final localUser = ref.watch(dyteClient).localUser;
    return DecoratedBox(
      decoration: BoxDecoration(color: Colors.grey.shade800.withOpacity(.9)),
      child: Row(
        mainAxisSize: MainAxisSize.min,
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          IconButton(
            onPressed: () async {
              localUser.audioEnabled
                  ? await localUser.disableAudio()
                  : await localUser.enableAudio();
            },
            icon: Icon(
              localUser.audioEnabled ? Icons.mic : Icons.mic_off,
              color: Colors.white,
            ),
          ),
          IconButton(
            onPressed: () async {
              localUser.videoEnabled
                  ? await localUser.disableVideo()
                  : await localUser.enableVideo();
            },
            icon: Icon(
              localUser.videoEnabled ? Icons.videocam : Icons.videocam_off,
              color: Colors.white,
            ),
          ),
          IconButton(
            onPressed: () {
              AppRouter.of(context).push(const DyteChatRoom());
            },
            icon: const Icon(
              Icons.chat,
              color: Colors.white,
            ),
          ),
          IconButton(
            onPressed: () {
              AppRouter.of(context).push(const ParticipantScreen());
            },
            icon: const Icon(
              Icons.people,
              color: Colors.white,
            ),
          ),
          IconButton(
            onPressed: () {
              AppRouter.of(context).push(const SettingsScreen());
            },
            icon: const Icon(
              Icons.settings,
              color: Colors.white,
            ),
          ),
          IconButton(
              onPressed: () {
                AppRouter.of(context).push(const PollScreen());
              },
              icon: const Icon(
                Icons.poll,
                color: Colors.white,
              ))
        ],
      ),
    );
  }
}
