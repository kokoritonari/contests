import 'dart:io';

main() {
  final s = int.parse(stdin.readLineSync()!);
  print((s + 9) ~/ 10 + (s < 0 ? -1 : 0));
}
