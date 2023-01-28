import 'package:flutter/material.dart';
import 'package:flutter_core/ui/home_page.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

import 'constants/colors.dart';

void main() {
  WidgetsFlutterBinding.ensureInitialized();
  runApp(const ProviderScope(child: DyteSampleApp()));
}

class DyteSampleApp extends StatelessWidget {
  const DyteSampleApp({super.key});

  @override
  Widget build(BuildContext context) {
    final theme = ThemeData.dark();
    return MaterialApp(
      theme: theme.copyWith(
        backgroundColor: DyteColors.background,
        scaffoldBackgroundColor: DyteColors.background,
        primaryColor: DyteColors.primary,
        colorScheme: theme.colorScheme.copyWith(
          secondary: DyteColors.primary,
        ),
      ),
      home: const HomePage(),
    );
  }
}
