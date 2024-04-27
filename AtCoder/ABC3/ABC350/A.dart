import 'dart:io';

main() {
  final n = int.parse(stdin.readLineSync()!.substring(3));
  print(0 < n && n < 350 && n != 316 ? "Yes" : "No");
}
