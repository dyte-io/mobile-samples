import 'package:dyte_core/dyte_core.dart';
import 'package:flutter_core/models/states/local_user_event_states.dart';
import 'package:flutter_core/models/states/participant_event_states.dart';
import 'package:flutter_core/models/states/plugin_event_states.dart';
import 'package:flutter_core/models/states/room_event_states.dart';
import 'package:flutter_core/notifiers/local_user_state_notifier.dart';
import 'package:flutter_core/notifiers/participant_state_notiifier.dart';
import 'package:flutter_core/notifiers/plugin_state_notifier.dart';
import 'package:flutter_core/notifiers/room_event_notifier.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

final roomEventStateNotifierProvider =
    StateNotifierProvider<RoomStateNotifier, RoomEventStates>((ref) {
  return RoomStateNotifier();
});

final participantEventStateNotifierProvider =
    StateNotifierProvider<ParticipantNotifier, ParticipantEventStates>((ref) {
  return ParticipantNotifier();
});

final localUserProvider =
    StateNotifierProvider<LocalUserNotifier, LocalUserEventStates>((ref) {
  return LocalUserNotifier();
});

final pluginEventStateNotifierProvider =
    StateNotifierProvider<PluginNotifier, PluginEventStates>((ref) {
  return PluginNotifier();
});

final dyteClient = Provider((ref) => DyteMobileClient());
