import 'package:dyte_core/dyte_core.dart';
import 'package:freezed_annotation/freezed_annotation.dart';

part 'room_event_states.freezed.dart';

@freezed
class RoomEventStates with _$RoomEventStates {
  const factory RoomEventStates.initial() = _RoomEventStatesInitial;
  const factory RoomEventStates.onChatUpdates({
    // DyteChatMessage? message,
    required List<DyteChatMessage> messages,
    // required bool newMessage,
  }) = _RoomEventStatesChatUpdates;
  const factory RoomEventStates.onMeetingInitStarted() =
      _RoomEventStatesOnInitStarted;
  const factory RoomEventStates.onMeetingInitCompleted() =
      _RoomEventStatesOnInitCompleted;
  const factory RoomEventStates.onMeetingInitFailed(Exception exception) =
      _RoomEventStatesOnInitFailed;
  const factory RoomEventStates.onMeetingRoomJoinStarted() =
      _RoomEventStatesOnMeetingRoomJoinStarted;
  const factory RoomEventStates.onMeetingRoomJoined(String meetingStartedAt) =
      _RoomEventStatesOnMeetingRoomJoined;
  const factory RoomEventStates.onMeetingRoomJoinFailed(Exception e) =
      _RoomEventStatesOnMeetingRoomJoinFailed;
  const factory RoomEventStates.onMeetingRoomLeaveStarted() =
      _RoomEventStatesOnMeetingRoomLeaveStarted;
  const factory RoomEventStates.onMeetingRoomLeft() =
      _RoomEventStatesOnMeetingRoomLeft;
  const factory RoomEventStates.onMeetingRecordingEnded() =
      _RoomEventStatesOnMeetingRecordingEnded;
  const factory RoomEventStates.onMeetingRecordingStarted() =
      _RoomEventStatesOnMeetingRecordingStarted;
  const factory RoomEventStates.onMeetingRecordingStopError() =
      _RoomEventStatesOnMeetingRecordingStopError;
  const factory RoomEventStates.onMeetingRecordingStateUpdated(
          DyteRecordingState recordingState) =
      _RoomEventStatesOnMeetingRecordingStateUpdated;
  const factory RoomEventStates.onMeetingRoomDisconnected() =
      _RoomEventStatesOnMeetingRoomDisconnected;
  const factory RoomEventStates.onPollUpdates(
          {
          // DytePollMessage? dytePollMessage,
          // required bool newPoll,
          required List<DytePollMessage> pollMessages}) =
      _RoomEventStatesOnPollUpdates;
}
