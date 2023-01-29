import 'package:dyte_core/dyte_core.dart';
import 'package:freezed_annotation/freezed_annotation.dart';

part 'plugin_event_states.freezed.dart';

@freezed
class PluginEventStates with _$PluginEventStates {
  const factory PluginEventStates.initial() = _PluginEventStatesInitial;
  const factory PluginEventStates.onPluginActivated(DytePlugin plugin) =
      _PluginEventStatesOnPluginActivated;
  const factory PluginEventStates.onPluginFileRequest(DytePlugin plugin) =
      _PluginEventStatesOnPluginFileRequest;
  const factory PluginEventStates.onPluginMessage(String message) =
      _PluginEventStatesOnPluginMessage;
  const factory PluginEventStates.onPluginDeactivated(DytePlugin plugin) =
      _PluginEventStatesOnPluginDeactivated;
}
