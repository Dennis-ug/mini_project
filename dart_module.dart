import 'dart:io';

void main() async {
  // Run the C++ program as a separate process
  Process cppProcess = await Process.start('./camera_reader');

  // Wait for the user to press 'Enter' to exit
  await stdin.first;

  // Terminate the C++ process
  cppProcess.kill();
}
