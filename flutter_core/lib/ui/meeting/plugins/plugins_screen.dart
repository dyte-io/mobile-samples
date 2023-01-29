import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/models/states/plugin_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/meeting/plugins/plugin_view_screen.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class PluginsScreen extends ConsumerStatefulWidget {
  final List<DytePlugin> plugins;
  const PluginsScreen({super.key, required this.plugins});

  @override
  ConsumerState<PluginsScreen> createState() => _PluginsScreenState();
}

class _PluginsScreenState extends ConsumerState<PluginsScreen> {
  String? _activatedPluginId;
  @override
  Widget build(BuildContext context) {
    ref.listen<PluginEventStates>(
      pluginEventStateNotifierProvider,
      (previous, next) {
        next.maybeMap(
            onPluginActivated: (res) {
              _activatedPluginId = res.plugin.id;
              setState(() {});
              Navigator.of(context).push(MaterialPageRoute(
                builder: (context) => PluginViewScreen(
                  plugin: res.plugin,
                ),
              ));
            },
            onPluginDeactivated: (value) {
              _activatedPluginId = null;
              setState(() {});
            },
            orElse: () {});
      },
    );
    return SafeArea(
      child: Scaffold(
        appBar: AppBar(
          centerTitle: true,
          title: const Text("Plugins"),
        ),
        body: ListView.builder(
          padding: const EdgeInsets.symmetric(horizontal: 2, vertical: 4),
          itemBuilder: (context, index) {
            final DytePlugin plugin = widget.plugins[index];
            return Padding(
              padding: const EdgeInsets.symmetric(horizontal: 3.0, vertical: 2),
              child: ListTile(
                trailing: IconButton(
                    onPressed: () async {
                      _activatedPluginId == plugin.id
                          ? await ref
                              .watch(dyteClient)
                              .plugins
                              .deactivate(plugin)
                          : await ref
                              .watch(dyteClient)
                              .plugins
                              .activate(plugin);
                    },
                    icon: Icon(
                      _activatedPluginId == plugin.id
                          ? Icons.close
                          : Icons.rocket_launch_outlined,
                      color: Colors.white,
                    )),
                minVerticalPadding: 3,
                shape: const RoundedRectangleBorder(
                    borderRadius: BorderRadius.all(Radius.circular(10))),
                leading: Image.network(plugin.picture),
                title: Text(
                  plugin.name,
                  style: const TextStyle(color: Colors.white),
                ),
                tileColor: Colors.blueGrey,
              ),
            );
          },
          itemCount: widget.plugins.length,
        ),
      ),
    );
  }
}
