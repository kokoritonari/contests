import 'dart:io';

main() {
  print(int.parse(stdin.readLineSync()!).toRadixString(2).padLeft(10, '0'));
}
