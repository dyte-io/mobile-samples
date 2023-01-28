import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_core/constants/colors.dart';

void showSnackbarWidget(BuildContext context, String message) =>
    ScaffoldMessenger.of(context).showSnackBar(
      SnackBar(
        backgroundColor: DyteColors.primary,
        onVisible: () async => await HapticFeedback.mediumImpact(),
        elevation: 0,
        padding: const EdgeInsets.all(18),
        shape: RoundedRectangleBorder(
          side: BorderSide(
            color: DyteColors.primary,
          ),
          borderRadius: BorderRadius.circular(18),
        ),
        behavior: SnackBarBehavior.floating,
        content: Container(
          width: MediaQuery.of(context).size.width * .9,
          decoration: BoxDecoration(borderRadius: BorderRadius.circular(10)),
          child: Text(
            message,
            style: Theme.of(context)
                .textTheme
                .bodyText2!
                .copyWith(color: Colors.white),
          ),
        ),
      ),
    );
