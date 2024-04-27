import 'dart:io';
import 'dart:math';

main() {
  final n = int.parse(stdin.readLineSync()!);
  final p = List.generate(n, (_) => stdin.readLineSync()!.split(' ').map(int.parse));
  final d = p.map((a) => -~p.map((b) => sqrt(pow(a.first - b.first, 2) + pow(a.last - b.last, 2))).indexed.fold((0, .0), (p, e) => p.$2 < e.$2 ? e : p).$1);

  print(d.join('\n'));
}
