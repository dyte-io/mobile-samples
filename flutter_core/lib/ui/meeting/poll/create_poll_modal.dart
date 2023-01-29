import 'package:flutter/material.dart';
import 'package:flutter_core/providers/providers.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

import '../../../constants/colors.dart';

class CreatePollModal extends ConsumerStatefulWidget {
  const CreatePollModal({super.key});

  @override
  ConsumerState<CreatePollModal> createState() => _CreatePollModalState();
}

class _CreatePollModalState extends ConsumerState<CreatePollModal> {
  bool anonymous = false;
  bool hideVotes = true;
  List<TextEditingController> mandatoryOptionControllers = [
    TextEditingController(),
    TextEditingController()
  ];

  List<TextEditingController> moreOptionsControllers = [];
  final questionController = TextEditingController();

  @override
  Widget build(BuildContext context) {
    final pollsApi = ref.watch(dyteClient).polls;

    return Scaffold(
      body: SafeArea(
        child: SizedBox(
          height: MediaQuery.of(context).size.height,
          width: MediaQuery.of(context).size.width,
          child: SingleChildScrollView(
            child: Column(
              children: [
                const Text('Question'),
                TextFormField(
                  decoration: const InputDecoration(hintText: 'Ask a question'),
                  controller: questionController,
                  maxLines: 3,
                ),
                const Text('Options'),
                ...mandatoryOptionControllers.map((e) => ListTile(
                      title: TextFormField(
                        controller: e,
                        decoration:
                            const InputDecoration(hintText: 'Enter an option'),
                      ),
                    )),
                ...moreOptionsControllers.map(
                  (e) => ListTile(
                    title: TextFormField(
                      controller: e,
                      decoration:
                          const InputDecoration(hintText: 'Enter an option'),
                    ),
                    trailing: IconButton(
                        onPressed: () {
                          setState(
                            () {
                              moreOptionsControllers
                                  .removeWhere((element) => element == e);
                            },
                          );
                        },
                        icon: const Icon(Icons.remove)),
                  ),
                ),
                TextButton(
                  onPressed: () {
                    setState(() {
                      moreOptionsControllers.add(TextEditingController());
                    });
                  },
                  style: ButtonStyle(
                      backgroundColor:
                          MaterialStateProperty.all(DyteColors.primary)),
                  child: const Text(
                    "Add an option",
                    style: TextStyle(color: Colors.white),
                  ),
                ),
                Row(
                  children: [
                    Switch.adaptive(
                      onChanged: (value) => setState(() {
                        anonymous = value;
                        if (anonymous == true) {
                          hideVotes = true;
                        }
                      }),
                      value: anonymous,
                    ),
                    const Text("Anonymous"),
                  ],
                ),
                Row(
                  children: [
                    Switch.adaptive(
                      onChanged: (value) => anonymous
                          ? null
                          : setState(() {
                              hideVotes = value;
                            }),
                      value: hideVotes,
                    ),
                    const Text("Hide Results before voting"),
                  ],
                ),
                TextButton(
                  onPressed: () {
                    List<TextEditingController> allOptions =
                        mandatoryOptionControllers + moreOptionsControllers;
                    if (checkControllerTextEmpty(questionController) ||
                        allOptions.any((controller) =>
                            checkControllerTextEmpty(controller))) {
                      ScaffoldMessenger.of(context).showSnackBar(
                        SnackBar(
                          content: Text(
                            checkControllerTextEmpty(questionController) == true
                                ? "Question is required."
                                : "Empty Options not allowed.",
                            style: TextStyle(color: DyteColors.red),
                          ),
                        ),
                      );
                    } else {
                      final ques = questionController.text.trim();
                      List<String> options =
                          allOptions.map((e) => e.text.trim()).toList();
                      pollsApi.create(
                        question: ques,
                        options: options,
                        anonymous: anonymous,
                        hideVotes: hideVotes,
                      );
                      Navigator.pop(context);
                    }
                  },
                  style: ButtonStyle(
                      backgroundColor:
                          MaterialStateProperty.all(DyteColors.primary)),
                  child: const Text(
                    'Create a poll',
                    style: TextStyle(color: Colors.white),
                  ),
                )
              ],
            ),
          ),
        ),
      ),
    );
  }
}

checkControllerTextEmpty(TextEditingController controller) {
  return controller.text.trim().isEmpty;
}
