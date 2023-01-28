import 'package:dyte_core/dyte_core.dart';
import 'package:flutter_core/models/states/plugin_event_states.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class PluginNotifier extends StateNotifier<PluginEventStates>
    with DytePluginEventsListener {
  PluginNotifier() : super(const PluginEventStates.initial());

  @override
  void onPluginActivated(DytePlugin plugin) {
    state = PluginEventStates.onPluginActivated(plugin);
  }

  @override
  void onPluginFileRequest(DytePlugin plugin) {
    state = PluginEventStates.onPluginFileRequest(plugin);
  }

  @override
  void onPluginMessage(String message) {
    state = PluginEventStates.onPluginMessage(message);
  }

  @override
  void onPluginDeactivated(DytePlugin plugin) {
    state = PluginEventStates.onPluginDeactivated(plugin);
  }
}
