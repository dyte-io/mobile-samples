import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/constants/colors.dart';
import 'package:flutter_core/models/states/participant_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/widgets/appbar.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class ParticipantScreen extends ConsumerStatefulWidget {
  const ParticipantScreen({Key? key}) : super(key: key);

  @override
  ConsumerState<ConsumerStatefulWidget> createState() =>
      _ParticipantScreenState();
}

class _ParticipantScreenState extends ConsumerState<ParticipantScreen> {
  @override
  Widget build(BuildContext context) {
    ref.listen<ParticipantEventStates>(participantEventStateNotifierProvider,
        (previous, next) {
      next.maybeMap(
        orElse: () {},
        onParticipantPinned: (_) {
          setState(() {});
        },
        onParticipantUnpinned: (_) {
          setState(() {});
        },
      );
    });
    final size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: const DyteAppBar(),
      body: SizedBox(
        height: size.height,
        child: StreamBuilder<DyteRoomParticipants>(
          stream: ref.watch(dyteClient).participantsStream,
          initialData: ref.watch(dyteClient).participants,
          builder: (context, snapshot) {
            if (snapshot.hasData) {
              return ListView.separated(
                separatorBuilder: (context, index) => const Divider(),
                padding: const EdgeInsets.symmetric(horizontal: 8),
                itemCount: snapshot.data!.joined.length,
                itemBuilder: (context, index) =>
                    _renderParticipantInfo(snapshot.data!.joined[index]),
              );
            }
            return const SizedBox.shrink();
          },
        ),
      ),
    );
  }

  Widget _renderParticipantInfo(DyteMeetingParticipant participant) {
    return Row(
      key: Key(
          '${participant.id}${participant.audioEnabled}${participant.videoEnabled}'),
      children: [
        Text(
          participant.name,
          style: const TextStyle(fontSize: 18),
        ),
        const Spacer(),
        IconButton(
            onPressed: () {
              (ref.watch(dyteClient).participants.pinned != null &&
                      ref.watch(dyteClient).participants.pinned!.id ==
                          participant.id)
                  ? ref.watch(dyteClient).unpin()
                  : ref.watch(dyteClient).pin(participant);
            },
            icon: Icon(
              (ref.watch(dyteClient).participants.pinned != null &&
                      ref.watch(dyteClient).participants.pinned!.id ==
                          participant.id)
                  ? Icons.push_pin
                  : Icons.push_pin_outlined,
              color: Colors.white,
            )),
        participant.audioEnabled
            ? _renderStateIcon(const Icon(Icons.mic_none_outlined))
            : _renderStateIcon(Icon(
                Icons.mic_off_outlined,
                color: DyteColors.red,
              )),
        participant.videoEnabled
            ? _renderStateIcon(const Icon(Icons.videocam))
            : _renderStateIcon(
                Icon(Icons.videocam_off_outlined, color: DyteColors.red))
      ],
    );
  }

  _renderStateIcon(Icon icon) {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: Container(
          height: 42,
          width: 42,
          decoration: BoxDecoration(
              color: Colors.grey.shade800,
              borderRadius: const BorderRadius.all(Radius.circular(4))),
          child: icon),
    );
  }
}
