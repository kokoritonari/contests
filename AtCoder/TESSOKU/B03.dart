import 'dart:io';

main() {
  var r = () => stdin.readLineSync()!.split(' ').map(int.parse);
  var [n, a] = [r(), r()];
  var c = (f, l, n) => f(f, l, n)((f, l, n) => n == 1 ? l.map((e) => [e]).toList() : l.asMap().entries.expand((entry) => f(l.sublist(entry.key + 1), n - 1).map((e) => [entry.value] + e)).toList(), a, 3);
  print(c);
}
