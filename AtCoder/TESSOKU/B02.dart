import 'dart:io';

main() {
  var [a, b] = stdin.readLineSync()!.split(' ').map(int.parse).toList();
  print(List.generate(b - a + 1, (i) => i + a).any((e) => 100 % e == 0) ? 'Yes' : 'No');
}
