import 'dart:developer';

import 'package:dyte_core/dyte_core.dart';
import 'package:file_picker/file_picker.dart';
import 'package:flutter/material.dart';
import 'package:flutter_core/models/states/room_event_states.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_core/ui/widgets/appbar.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

class DyteChatRoom extends ConsumerStatefulWidget {
  const DyteChatRoom({Key? key}) : super(key: key);

  @override
  ConsumerState<ConsumerStatefulWidget> createState() => _DyteChatRoomState();
}

class _DyteChatRoomState extends ConsumerState<DyteChatRoom> {
  final chatController = TextEditingController();
  @override
  Widget build(BuildContext context) {
    ref.listen<RoomEventStates>(
      roomEventStateNotifierProvider,
      (previous, next) {
        next.maybeWhen(
          onChatUpdates: (messages) {
            setState(() {});
          },
          orElse: () {},
        );
      },
    );
    final Size size = MediaQuery.of(context).size;
    final chatApi = ref.watch(dyteClient).chat;
    log(chatApi.messages.length.toString(), name: "Chat Messages");
    return Scaffold(
      appBar: const DyteAppBar(),
      body: SizedBox(
        height: size.height * 70,
        width: size.width,
        child: Column(
          children: [
            Expanded(
              child: ListView.builder(
                itemCount: chatApi.messages.length,
                itemBuilder: (context, index) {
                  if (chatApi.messages[index].type == DyteMessageType.text) {
                    final message = chatApi.messages[index] as DyteTextMessage;
                    return _renderTextMessage(message);
                  } else if (chatApi.messages[index].type ==
                      DyteMessageType.image) {
                    final message = chatApi.messages[index] as DyteImageMessage;
                    return _renderImageMessage(message);
                  } else if (chatApi.messages[index].type ==
                      DyteMessageType.file) {
                    final message = chatApi.messages[index] as DyteFileMessage;
                    return _renderFileMessage(message);
                  }
                  return const Text("Message type not supported");
                },
              ),
            ),
            SizedBox(
              height: 100,
              width: size.width,
              child: Row(
                children: [
                  Expanded(
                    child: TextFormField(
                      controller: chatController,
                    ),
                  ),
                  IconButton(
                    onPressed: () async {
                      final file = await FilePicker.platform
                          .pickFiles(allowMultiple: false);
                      log("SEND FILE MESSAGE: ${file!.files[0].path}, ${file.files[0].extension}");
                      if (file.count > 0) {
                        final message = chatController.text.isNotEmpty
                            ? chatController.text
                            : ' ';

                        if (file.files[0].path == null) {
                          log("ERROR: FILE NOT AVAILABLE");
                        } else {
                          log("SEND FILE MESSAGE: ${file.files[0].path}, ${file.files[0].extension}");
                          chatApi.sendFileMessage(file.files[0].path!, message);
                        }
                      }
                    },
                    icon: const RotatedBox(
                      quarterTurns: -1,
                      child: Icon(Icons.attachment),
                    ),
                  ),
                  IconButton(
                    onPressed: () async {
                      final file = await FilePicker.platform
                          .pickFiles(type: FileType.image);
                      log("SEND IMAGE MESSAGE: ${file!.files[0].path}, ${file.files[0].extension}");
                      if (file.count > 0) {
                        final message = chatController.text.isNotEmpty
                            ? chatController.text
                            : ' ';

                        if (file.files[0].path == null) {
                          log("ERROR: IMAGE NOT AVAILABLE");
                        } else {
                          log("SEND IMAGE MESSAGE: ${file.files[0].path}, ${file.files[0].extension}");
                          chatApi.sendImageMessage(
                              file.files[0].path!, message);
                        }
                      }
                    },
                    icon: const Icon(Icons.image),
                  ),
                  IconButton(
                    onPressed: () {
                      if (chatController.text.isNotEmpty) {
                        chatApi.sendTextMessage(chatController.text);
                        chatController.text = "";
                      }
                    },
                    icon: const Icon(Icons.send),
                  )
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _renderTextMessage(DyteTextMessage message) {
    return ListTile(
      visualDensity: VisualDensity.compact,
      title: Text(
        message.displayName,
        style: const TextStyle(fontSize: 14),
      ),
      subtitle: Text(
        message.message,
        style: const TextStyle(fontSize: 18),
      ),
    );
  }

  Widget _renderImageMessage(DyteImageMessage message) {
    return ListTile(
      visualDensity: VisualDensity.compact,
      title: Text(
        message.displayName,
        style: const TextStyle(fontSize: 14),
      ),
      subtitle: Image.network(
        message.link,
        errorBuilder: (context, error, stackTrace) {
          log("NETWORK IMAGE ERROR: $error");
          return Container();
        },
      ),
    );
  }

  Widget _renderFileMessage(DyteFileMessage message) {
    return ListTile(
      title: Text(
        message.displayName,
        style: const TextStyle(fontSize: 14),
      ),
      subtitle: Row(
        children: [
          Text(
            message.name,
            style: const TextStyle(fontSize: 18),
          ),
          IconButton(onPressed: () {}, icon: const Icon(Icons.download))
        ],
      ),
    );
  }
}
