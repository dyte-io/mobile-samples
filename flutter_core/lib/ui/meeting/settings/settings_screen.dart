import 'dart:developer';

import 'package:dyte_core/dyte_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class SettingsScreen extends ConsumerStatefulWidget {
  const SettingsScreen({super.key});

  @override
  ConsumerState<ConsumerStatefulWidget> createState() => _SettingsScreenState();
}

class _SettingsScreenState extends ConsumerState<SettingsScreen> {
  VideoDeviceType? _currentVideoDevice = VideoDeviceType.front;
  AudioDeviceType? _currentAudioDevice = AudioDeviceType.speaker;

  @override
  void initState() {
    Future.microtask(() {
      ref
          .watch(dyteClient)
          .localUser
          .getSelectedAudioDevice()
          .then((value) => setState(() {
                log(value.toJson());
                _currentAudioDevice = value.type;
              }));
      ref
          .watch(dyteClient)
          .localUser
          .getSelectedVideoDevice()
          .then((value) => setState(() {
                _currentVideoDevice = value.type;
              }));
    });

    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    final size = MediaQuery.of(context).size;
    return SafeArea(
      child: Scaffold(
        body: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            const Text("Audio Devices"),
            SizedBox(
              height: size.height * .18,
              child: _getAudioDeviceWidget(),
            ),
            const Text("Video Devices"),
            SizedBox(
              height: size.height * .18,
              child: _getVideoDeviceWidget(),
            ),
          ],
        ),
      ),
    );
  }

  Widget _getAudioDeviceWidget() {
    return FutureBuilder<List<DyteAudioDevice>>(
      future: ref.watch(dyteClient).localUser.getAudioDevices(),
      builder: (context, snapshot) {
        if (snapshot.data != null) {
          return ListView(
            children: [
              ...snapshot.data!.map(
                (audioDevice) {
                  return ListTile(
                    title: Text(audioDevice.type.displayName),
                    leading: Radio<AudioDeviceType>(
                      value: audioDevice.type,
                      groupValue: _currentAudioDevice,
                      onChanged: (value) {
                        ref
                            .watch(dyteClient)
                            .localUser
                            .setAudioDevice(audioDevice);
                        setState(() {
                          _currentAudioDevice = value;
                        });
                      },
                    ),
                  );
                },
              ).toList()
            ],
          );
        } else {
          return const Text("No Audio Device found");
        }
      },
    );
  }

  Widget _getVideoDeviceWidget() {
    return FutureBuilder<List<DyteVideoDevice>>(
      future: ref.watch(dyteClient).localUser.getVideoDevices(),
      builder: (context, snapshot) {
        if (snapshot.data != null) {
          return ListView(
            children: [
              ...snapshot.data!.map(
                (videoDevice) {
                  return ListTile(
                    title: Text(videoDevice.type.displayName),
                    leading: Radio<VideoDeviceType>(
                      value: videoDevice.type,
                      groupValue: _currentVideoDevice,
                      onChanged: (value) {
                        ref
                            .watch(dyteClient)
                            .localUser
                            .switchCamera(videoDevice);
                        setState(() {
                          _currentVideoDevice = value;
                        });
                      },
                    ),
                  );
                },
              ).toList()
            ],
          );
        } else {
          return const Text("No Video Device found");
        }
      },
    );
  }
}
