import 'package:dyte_uikit/dyte_uikit.dart';
import 'package:flutter/material.dart';
import 'package:flutter_uikit/secrets.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return const MaterialApp(
      home: HomePage(),
    );
  }
}

class HomePage extends StatelessWidget {
  const HomePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: MaterialButton(
          color: Colors.black,
          onPressed: () {
            Navigator.push(
              context,
              MaterialPageRoute(builder: (context) {
                return const DyteMeetingPage();
              }),
            );
            // DyteUIKit.loadUI();
          },
          child: const Text(
            "Load UIKit",
            style: TextStyle(color: Colors.white),
          ),
        ),
      ),
    );
  }
}

class DyteMeetingPage extends StatelessWidget {
  const DyteMeetingPage({super.key});

  @override
  Widget build(BuildContext context) {
    final DyteUIKit uiKit = DyteUIKit(
      meetingInfo: DyteMeetingInfo(
        roomName: meetingRoomName,
        enableAudio: true,
        enableVideo: true,
        displayName: 'Flutter UI kit',
        authToken: authToken,
      ),
    );
    return uiKit.loadUI();
  }
}
