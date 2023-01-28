import 'package:dyte_core/dyte_core.dart';
import 'package:flutter_core/models/states/room_event_states.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class RoomStateNotifier extends StateNotifier<RoomEventStates>
    with DyteMeetingRoomEventsListener {
  RoomStateNotifier() : super(const RoomEventStates.initial());

  @override
  void onChatUpdates({
    // DyteChatMessage? message,
    required List<DyteChatMessage> messages,
    // required bool newMessage,
  }) {
    state = RoomEventStates.onChatUpdates(
      // message: message,
      messages: messages,
      // newMessage: newMessage,
    );
  }

  @override
  void onMeetingInitCompleted() {
    state = const RoomEventStates.onMeetingInitCompleted();
  }

  @override
  void onMeetingInitFailed(Exception exception) {
    state = RoomEventStates.onMeetingInitFailed(exception);
  }

  @override
  void onMeetingInitStarted() {
    state = const RoomEventStates.onMeetingInitStarted();
  }

  @override
  void onMeetingRecordingEnded() {
    state = const RoomEventStates.onMeetingRecordingEnded();
  }

  @override
  void onMeetingRecordingStarted() {
    state = const RoomEventStates.onMeetingRecordingStarted();
  }

  @override
  void onMeetingRecordingStopError() {
    state = const RoomEventStates.onMeetingRecordingStopError();
  }

  @override
  void onMeetingRoomLeft() {
    state = const RoomEventStates.onMeetingRoomLeft();
  }

  @override
  void onPollUpdates({
    // DytePollMessage? dytePollMessage,
    // required bool newPoll,
    required List<DytePollMessage> pollMessages,
  }) {
    state = RoomEventStates.onPollUpdates(
      // newPoll: newPoll,
      pollMessages: pollMessages,
      // dytePollMessage: dytePollMessage,
    );
  }

  @override
  void onMeetingRecordingStateUpdated(DyteRecordingState recordingState) {
    state = RoomEventStates.onMeetingRecordingStateUpdated(recordingState);
  }
}
