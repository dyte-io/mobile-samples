
import 'package:dyte_core/dyte_core.dart';
import 'package:flutter_core/models/states/participant_event_states.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class ParticipantNotifier extends StateNotifier<ParticipantEventStates>
    with DyteParticipantEventsListener {
  ParticipantNotifier() : super(const ParticipantEventStates.initial());

  @override
  void onAudioUpdate({
    required bool audioEnabled,
    required DyteMeetingParticipant participant,
  }) {
    state = ParticipantEventStates.onAudioUpdate(
        audioEnabled: audioEnabled, participant: participant);
  }

  @override
  void onActiveSpeakerChanged(DyteMeetingParticipant participant) {
    state = ParticipantEventStates.onActiveSpeakerChanged(participant);
  }

  @override
  void onNoActiveSpeaker() {
    state = const ParticipantEventStates.onNoActiveSpeaker();
  }

  @override
  void onParticipantJoin(DyteMeetingParticipant participant) {
    state = ParticipantEventStates.onParticipantJoin(participant);
  }

  @override
  void onParticipantLeave(DyteMeetingParticipant participant) {
    state = ParticipantEventStates.onParticipantLeave(participant);
  }

  @override
  void onParticipantPinned(DyteMeetingParticipant participant) {
    state = ParticipantEventStates.onParticipantPinned(participant);
  }

  @override
  void onActiveParticipantsChanged(List<DyteMeetingParticipant> active) {
    state = ParticipantEventStates.onActiveParticipantsChanged(
        activeParticipants: active);
  }

  @override
  void onGridUpdated(GridPagesInfo gridInfo) {
    super.onGridUpdated(gridInfo);
    state = ParticipantEventStates.onGridUpdated(gridPagesInfo: gridInfo);
  }

  @override
  void onParticipantUnpinned() {
    state = const ParticipantEventStates.onParticipantUnpinned();
  }

  @override
  void onScreenSharesUpdated() {
    state = const ParticipantEventStates.onScreenSharesUpdated();
  }

  @override
  void onVideoUpdate({
    required bool videoEnabled,
    required DyteMeetingParticipant participant,
  }) {
    state = ParticipantEventStates.onVideoUpdate(
        videoEnabled: videoEnabled, participant: participant);
  }

  @override
  void onUpdate(DyteRoomParticipants participants) {
    state = ParticipantEventStates.onUpdate(participants);
  }
}
