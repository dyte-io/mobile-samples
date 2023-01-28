import 'package:dyte_core/dyte_core.dart';
import 'package:freezed_annotation/freezed_annotation.dart';

part 'local_user_event_states.freezed.dart';

@freezed
class LocalUserEventStates with _$LocalUserEventStates {
  const factory LocalUserEventStates.initial() = _LocalUserEventStateInitial;

  const factory LocalUserEventStates.onMeetingRoomJoinStarted() =
      _LocalUserEventStateonMeetingRoomJoinStarted;

  const factory LocalUserEventStates.onMeetingRoomJoined() =
      _LocalUserEventonMeetingRoomJoined;

  const factory LocalUserEventStates.onMeetingRoomJoinFailed(
      Exception exception) = _LocalUserEventStateonMeetingRoomJoinFailed;

  const factory LocalUserEventStates.onAudioDevicesUpdated() =
      _LocalUserEventStateOnAudioDevicesUpdated;

  const factory LocalUserEventStates.onAudioUpdate(bool audioEnabled) =
      _LocalUserEventStateonAudioUpdate;

  const factory LocalUserEventStates.onProximityChanged(bool isNear) =
      _LocalUserEventStateonProximityChanged;

  const factory LocalUserEventStates.onUpdate(DyteLocalUser participant) =
      _LocalUserEventStateonUpdate;

  const factory LocalUserEventStates.onVideoUpdate(bool videoEnabled) =
      _LocalUserEventStateonVideoUpdate;

  const factory LocalUserEventStates.onMeetingRoomLeaveStarted() =
      _LocalUserEventStatesOnMeetingRoomLeaveStarted;

  const factory LocalUserEventStates.onMeetingRoomLeft() =
      _LocalUserEventStatesOnMeetingRoomLeaveLeft;

  const factory LocalUserEventStates.onMeetingRoomDisconnected() =
      _LocalUserEventStateonMeetingRoomDisconnected;
}
