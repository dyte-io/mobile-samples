import 'package:flutter/material.dart';
import 'package:flutter_core/constants/colors.dart';

class DyteButton extends StatelessWidget {
  const DyteButton({
    super.key,
    required this.label,
    this.size,
    this.onPressed,
    this.color,
  });
  final VoidCallback? onPressed;
  final String label;
  final Size? size;
  final Color? color;

  @override
  Widget build(BuildContext context) {
    return MaterialButton(
      color: color ?? DyteColors.primary,
      minWidth: size?.width ?? 100,
      height: size?.height ?? 40,
      onPressed: onPressed,
      child: Text(label),
    );
  }
}
