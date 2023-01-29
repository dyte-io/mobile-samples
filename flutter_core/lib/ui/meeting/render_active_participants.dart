import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class RenderActiveParticipants extends ConsumerStatefulWidget {
  const RenderActiveParticipants({super.key});

  @override
  ConsumerState<RenderActiveParticipants> createState() =>
      _RenderActiveParticipantsState();
}

class _RenderActiveParticipantsState
    extends ConsumerState<RenderActiveParticipants> {
  @override
  Widget build(BuildContext context) {
    return StreamBuilder<List<DyteMeetingParticipant>>(
      stream: ref.read(dyteClient).activeStream,
      initialData: ref.watch(dyteClient).participants.active,
      builder: (context, snapshot) {
        final data = snapshot.data;
        if (data != null) {
          return GridView(
            gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
              crossAxisCount: 2,
              childAspectRatio: 1,
              crossAxisSpacing: 10,
              mainAxisSpacing: 10,
              mainAxisExtent: 200,
            ),
            children: data.map(
              (e) {
                return Stack(children: [
                  VideoView(meetingParticipant: e),
                  Positioned(
                    right: 3,
                    bottom: 2,
                    child: Container(
                      height: 20,
                      width: 50,
                      color: Colors.grey,
                      child: Text(
                        e.name,
                        style: const TextStyle(color: Colors.white),
                        overflow: TextOverflow.ellipsis,
                      ),
                    ),
                  )
                ]);
              },
            ).toList(),
          );
        } else {
          return const Center(
            child: CircularProgressIndicator(),
          );
        }
      },
    );
  }
}
