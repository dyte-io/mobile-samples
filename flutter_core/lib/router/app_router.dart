import 'package:flutter/material.dart';

class AppRouter {
  static of(BuildContext context) => _AppRouter(context);
}

class _AppRouter {
  BuildContext context;
  _AppRouter(this.context);
  void push(Widget page) =>
      Navigator.push(context, MaterialPageRoute(builder: (context) => page));

  void pop() => Navigator.pop(context);
}
