import 'package:flutter/material.dart';
import 'package:flutter_core/constants/colors.dart';
import 'package:flutter_core/models/states/local_user_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/meeting/dyte_room.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class StagingRoom extends ConsumerWidget {
  const StagingRoom({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context, WidgetRef ref) {
    ref.listen<LocalUserEventStates>(localUserProvider, (previous, next) {
      next.maybeWhen(
        onMeetingRoomJoined: () {
          Navigator.push(context, MaterialPageRoute(builder: (context) {
            return const DyteRoom();
          }));
        },
        orElse: () {},
      );
    });
    return Scaffold(
      body: Center(
        child: MaterialButton(
          color: DyteColors.primary,
          minWidth: 160,
          height: 40,
          child: const Text("Join Meeting STAGING"),
          onPressed: () {
            ref.watch(dyteClient).joinRoom();
          },
        ),
      ),
    );
  }
}
