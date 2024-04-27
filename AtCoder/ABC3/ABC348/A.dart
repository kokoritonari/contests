import 'dart:io';

main() {
  final n = int.parse(stdin.readLineSync()!);
  print(List.generate(n, (i) => i % 3 == 2 ? 'x' : 'o').join());
}
