import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/constants/colors.dart';
import 'package:flutter_core/models/states/room_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/meeting/poll/create_poll_modal.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class PollScreen extends ConsumerStatefulWidget {
  const PollScreen({super.key});

  @override
  ConsumerState<PollScreen> createState() => _PollScreenState();
}

class _PollScreenState extends ConsumerState<PollScreen> {
  final questionController = TextEditingController();
  final opt1Controller = TextEditingController();
  final opt2Controller = TextEditingController();
  bool anonymous = false;
  bool hideVotes = true;
  List<DytePollMessage> pollQues = [];

  @override
  void didChangeDependencies() {
    super.didChangeDependencies();
    final pollsApi = ref.watch(dyteClient).polls;
    pollQues = pollsApi.polls;
  }

  @override
  Widget build(BuildContext context) {
    final pollsApi = ref.watch(dyteClient).polls;

    ref.listen<RoomEventStates>(
      roomEventStateNotifierProvider,
      (previous, next) => next.maybeMap(
        orElse: () {
          return null;
        },
        onPollUpdates: (value) {
          pollQues = pollsApi.polls;
          setState(() {});
          return null;
        },
      ),
    );

    return Scaffold(
      body: ListView.builder(
        itemBuilder: (context, index) => PollUI(poll: pollQues[index]),
        itemCount: pollQues.length,
      ),
      floatingActionButton: IconButton(
        onPressed: () {
          Navigator.push(
              context,
              MaterialPageRoute(
                builder: (context) => const CreatePollModal(),
              ));
        },
        style: ButtonStyle(
          backgroundColor: MaterialStateProperty.all(DyteColors.primary),
        ),
        icon: const Icon(
          Icons.add,
          color: Colors.white,
        ),
      ),
    );
  }
}

class PollUI extends ConsumerStatefulWidget {
  final DytePollMessage poll;
  const PollUI({super.key, required this.poll});

  @override
  ConsumerState<PollUI> createState() => _PollUIState();
}

class _PollUIState extends ConsumerState<PollUI> {
  // var _voteValue;
  DytePollOption? _voted;
  @override
  Widget build(BuildContext context) {
    int voteCount = 0;
    final currUserId = ref.watch(dyteClient).localUser.userId;
    final pollsApi = ref.watch(dyteClient).polls;
    final totalParticipants = ref.watch(dyteClient).participants.active;
    widget.poll.options.map((opt) => voteCount += opt.count);
    return Card(
      child: Column(
        mainAxisAlignment: MainAxisAlignment.start,
        children: [
          Text(widget.poll.question),
          ...widget.poll.options.map(
            (e) => ListTile(
              contentPadding:
                  const EdgeInsets.symmetric(horizontal: 4, vertical: 2),
              title: OptionText(
                  option: e,
                  pollMessage: widget.poll,
                  totalParticipants: totalParticipants.length),
              // Text(
              //     "${e.text} (${(widget.poll.anonymous) ? ((voteCount != totalParticipants.length) ? "0" : e.count) : ""})"),
              leading: Icon(
                e.votes.any(
                  (voters) => voters.id == currUserId,
                )
                    ? Icons.check_box_rounded
                    : Icons.check_box_outline_blank_rounded,
              ),
              textColor: Colors.white,
              onTap: () {
                if (_voted == null) {
                  pollsApi.vote(pollMessage: widget.poll, pollOption: e);
                  setState(() {
                    _voted = e;
                  });
                }
              },
            ),
          )
        ],
      ),
    );
  }
}

class OptionText extends ConsumerWidget {
  final DytePollOption option;
  final DytePollMessage pollMessage;
  final int totalParticipants;

  const OptionText({
    super.key,
    required this.option,
    required this.pollMessage,
    required this.totalParticipants,
  });

  @override
  Widget build(BuildContext context, ref) {
    final userName = ref.watch(dyteClient).localUser.name;
    int voteCount = 0;
    String optionText = option.text;
    pollMessage.options.map((opt) => voteCount += opt.count);
    if (pollMessage.anonymous || pollMessage.hideVotes) {
      if (pollMessage.createdBy == userName || voteCount == totalParticipants) {
        optionText += " (${option.count})";

        if (!pollMessage.anonymous) {
          optionText += "    : ${option.votes.map((e) => e.name)}";
        }
      } else {
        optionText += " (0)";
      }
    } else {
      optionText +=
          " (${option.count})    : ${option.votes.map((e) => e.name)}";
    }

    return Text(optionText);
  }
}
