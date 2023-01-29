import 'package:flutter/material.dart';
import 'package:flutter_svg/svg.dart';

class DyteAppBar extends StatelessWidget implements PreferredSizeWidget {
  const DyteAppBar({
    super.key,
    this.action,
  });
  final Widget? action;

  @override
  Widget build(BuildContext context) {
    return SafeArea(
      child: Row(
        mainAxisAlignment: MainAxisAlignment.start,
        children: [
          if (action != null) const SizedBox(width: 10),
          SvgPicture.asset('assets/dyte_logo.svg'),
          const Spacer(),
          if (action != null) action!,
          if (action != null) const SizedBox(width: 10)
        ],
      ),
    );
  }

  @override
  Size get preferredSize => const Size.fromHeight(100);
}
