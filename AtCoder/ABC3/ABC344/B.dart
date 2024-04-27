import 'dart:io';

main() {
  final a = [];
  while (true) {
    a.add(stdin.readLineSync());
    if (a.last == null) break;
  }

  print(a.sublist(0, ~-a.length).reversed.join('\n'));
}
