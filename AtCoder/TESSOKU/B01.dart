import 'dart:io';

main() {
  var [a, b] = stdin.readLineSync()!.split(' ').map(int.parse).toList();
  print(a + b);
}
