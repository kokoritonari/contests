import 'dart:io';

main() {
  final s = stdin.readLineSync()!.split('|');
  print(s[0] + s[2]);
}
