import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class ParticipantsGrid extends ConsumerStatefulWidget {
  final List<DyteMeetingParticipant> participants;
  const ParticipantsGrid({
    super.key,
    required this.participants,
  });

  @override
  ConsumerState<ParticipantsGrid> createState() => _ParticipantsGridState();
}

class _ParticipantsGridState extends ConsumerState<ParticipantsGrid> {
  late List<DyteMeetingParticipant> _activeParticipants;

  @override
  Widget build(BuildContext context) {
    return GridView(
      // physics: const NeverScrollableScrollPhysics(),
      gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
        crossAxisCount: 2,
        childAspectRatio: 1,
        crossAxisSpacing: 10,
        mainAxisSpacing: 10,
        mainAxisExtent: 200,
      ),
      children: _activeParticipants.map((e) {
        return VideoView(meetingParticipant: e);
      }).toList(),
    );
  }
}
