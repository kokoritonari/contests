import 'dart:io';

main() {
  stdin.readLineSync();
  final a = stdin.readLineSync()!.split(' ').map(int.parse);
  print(-a.reduce((v, e) => v + e));
}
