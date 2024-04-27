import 'dart:io';

main() {
  final s = stdin.readLineSync()!;
  print(s == '<${'=' * (s.length - 2)}>' ? 'Yes' : 'No');
}
