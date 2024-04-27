import 'dart:io';

main() {
  final k = int.parse(stdin.readLineSync()!.split(' ')[1]);
  print(stdin.readLineSync()!.split(' ').map(int.parse).where((e) => e % k == 0).map((e) => e ~/ k).join(' '));
}
