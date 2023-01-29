import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/foundation.dart';
import 'package:flutter/gestures.dart';
import 'package:flutter/material.dart';
import 'package:flutter/rendering.dart';
import 'package:flutter/services.dart';
import 'package:flutter_core/models/states/plugin_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/widgets/appbar.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class PluginViewScreen extends ConsumerStatefulWidget {
  final DytePlugin plugin;
  const PluginViewScreen({super.key, required this.plugin});

  @override
  ConsumerState<PluginViewScreen> createState() => _PluginViewScreenState();
}

class _PluginViewScreenState extends ConsumerState<PluginViewScreen> {
  Key _generateKeyForPlugin() {
    return Key(
        '${widget.plugin.id} ${widget.plugin.name} ${widget.plugin.picture}');
  }

  @override
  Widget build(BuildContext context) {
    const String viewType = 'DytePlatformPluginView';

    final Map<String, dynamic> creationParams = {
      'id': widget.plugin.id,
      'name': widget.plugin.name,
    };

    ref.listen<PluginEventStates>(pluginEventStateNotifierProvider,
        (previous, next) {
      next.maybeMap(
        orElse: () {},
        onPluginDeactivated: (_) async {
          Navigator.of(context).pop();
        },
      );
    });

    return Scaffold(
      appBar: DyteAppBar(
        action: IconButton(
          onPressed: () async {
            await ref.watch(dyteClient).plugins.deactivate(widget.plugin);
          },
          icon: const Icon(
            Icons.close,
            color: Colors.white,
          ),
        ),
      ),
      body: SizedBox(
        height: MediaQuery.of(context).size.height * .8,
        width: MediaQuery.of(context).size.width,
        child: LayoutBuilder(
          builder: (context, constraints) {
            switch (defaultTargetPlatform) {
              case TargetPlatform.android:
                return PlatformViewLink(
                  key: _generateKeyForPlugin(),
                  surfaceFactory: (context, controller) => AndroidViewSurface(
                    controller: controller as AndroidViewController,
                    hitTestBehavior: PlatformViewHitTestBehavior.opaque,
                    gestureRecognizers: <Factory<OneSequenceGestureRecognizer>>{
                      Factory<EagerGestureRecognizer>(
                          () => EagerGestureRecognizer()),
                      Factory<TapGestureRecognizer>(
                          () => TapGestureRecognizer()),
                    },
                  ),
                  onCreatePlatformView: (params) =>
                      PlatformViewsService.initAndroidView(
                    id: params.id,
                    viewType: viewType,
                    layoutDirection: TextDirection.ltr,
                    creationParams: creationParams,
                    creationParamsCodec: const StandardMessageCodec(),
                    onFocus: () => params.onFocusChanged(true),
                  )
                        ..addOnPlatformViewCreatedListener(
                            params.onPlatformViewCreated)
                        ..create(),
                  viewType: viewType,
                );
              case TargetPlatform.iOS:
                return ClipRect(
                  child: UiKitView(
                    key: _generateKeyForPlugin(),
                    viewType: viewType,
                    layoutDirection: TextDirection.ltr,
                    creationParams: creationParams,
                    creationParamsCodec: const StandardMessageCodec(),
                  ),
                );
              default:
                return Container();
            }
          },
        ),
      ),
    );
  }
}
