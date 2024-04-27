import 'dart:io';

main() {
  var r = stdin.readLineSync; r();
  final a = r()!.split(' ').map(int.parse);
  final b = a.fold((1, []), (p, c) => (c, p.$2 + [c * p.$1])).$2.skip(1);
  print(b.join(' '));
}
