import 'package:dyte_core/dyte_core.dart';
import 'package:flutter_core/models/states/local_user_event_states.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class LocalUserNotifier extends StateNotifier<LocalUserEventStates>
    with DyteSelfEventsListener {
  LocalUserNotifier() : super(const LocalUserEventStates.initial());

  @override
  void onAudioDevicesUpdated() =>
      state = const LocalUserEventStates.onAudioDevicesUpdated();

  @override
  void onAudioUpdate(bool audioEnabled) =>
      state = LocalUserEventStates.onAudioUpdate(audioEnabled);

  @override
  void onProximityChanged(bool isNear) =>
      state = LocalUserEventStates.onProximityChanged(isNear);

  @override
  void onUpdate(DyteLocalUser participant) =>
      state = LocalUserEventStates.onUpdate(participant);

  @override
  void onVideoUpdate(bool videoEnabled) =>
      state = LocalUserEventStates.onVideoUpdate(videoEnabled);

  @override
  void onMeetingRoomDisconnected() =>
      state = const LocalUserEventStates.onMeetingRoomDisconnected();

  @override
  void onMeetingRoomJoinFailed(Exception exception) =>
      state = LocalUserEventStates.onMeetingRoomJoinFailed(exception);

  @override
  void onMeetingRoomJoinStarted() =>
      state = const LocalUserEventStates.onMeetingRoomJoinStarted();

  @override
  void onMeetingRoomJoined() =>
      state = const LocalUserEventStates.onMeetingRoomJoined();

  @override
  void onMeetingRoomLeaveStarted() =>
      state = const LocalUserEventStates.onMeetingRoomLeaveStarted();

  @override
  void onMeetingRoomLeft() =>
      state = const LocalUserEventStates.onMeetingRoomLeft();
}
