import 'dart:io';

main() {
  final a = stdin.readLineSync()!.split(' ').map(int.parse);
  print(List.generate(10, (i) => i).where((e) => e != a.first + a.last).first);
}
