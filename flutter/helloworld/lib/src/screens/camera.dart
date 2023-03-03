import 'package:flutter/material.dart';

class CameraScreen extends StatelessWidget {
  const CameraScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('撮影'),
      ),
      body: const Center(
          child: Text('撮影画面', style: TextStyle(fontSize: 32.0))),
    );
  }
}