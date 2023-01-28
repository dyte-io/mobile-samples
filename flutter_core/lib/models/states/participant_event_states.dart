import 'package:dyte_core/dyte_core.dart';
import 'package:freezed_annotation/freezed_annotation.dart';

part 'participant_event_states.freezed.dart';

@freezed
class ParticipantEventStates with _$ParticipantEventStates {
  const factory ParticipantEventStates.initial() = _ParticipantEventStates;

  const factory ParticipantEventStates.onAudioUpdate({
    required bool audioEnabled,
    required DyteMeetingParticipant participant,
  }) = _ParticipantEventStatesAudioUpdate;

  const factory ParticipantEventStates.onActiveSpeakerChanged(
          DyteMeetingParticipant participant) =
      _ParticipantEventStateOnActiveSpeakerChanged;

  const factory ParticipantEventStates.onNoActiveSpeaker() =
      _ParticipantEventStatesOnNoActiveSpeaker;

  const factory ParticipantEventStates.onParticipantJoin(
          DyteMeetingParticipant participant) =
      _ParticipantEventStatesOnParticipantJoin;

  const factory ParticipantEventStates.onParticipantLeave(
          DyteMeetingParticipant participant) =
      _ParticipantEventStatesOnParticipantLeave;

  const factory ParticipantEventStates.onParticipantPinned(
          DyteMeetingParticipant participant) =
      _ParticipantEventStatesOnParticipantPinned;

  const factory ParticipantEventStates.onParticipantUnpinned() =
      _ParticipantEventStatesOnParticipantUnpinned;

  const factory ParticipantEventStates.onScreenSharesUpdated() =
      _ParticipantEventStatesOnScreenSharesUpdated;

  const factory ParticipantEventStates.onUpdate(
      DyteRoomParticipants participants) = _ParticipantEventStatesOnUpdate;

  const factory ParticipantEventStates.onVideoUpdate(
          {required bool videoEnabled,
          required DyteMeetingParticipant participant}) =
      _ParticipantEventStatesVideoUpdate;

  const factory ParticipantEventStates.onActiveParticipantsChanged(
          {required List<DyteMeetingParticipant> activeParticipants}) =
      _OnActiveParticipantsChanged;

  const factory ParticipantEventStates.onGridUpdated(
      {required GridPagesInfo gridPagesInfo}) = _OnGridUpdated;
}
