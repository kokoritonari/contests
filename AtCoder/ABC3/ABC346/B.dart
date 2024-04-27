import 'dart:io';
import 'dart:core';

main() {
  final [w, b] = stdin.readLineSync()!.split(' ').map(int.parse).toList();
  final k = '11010110101011'; // 9:5
  final p = [for (var i in List.generate(k.length, (x) => x)) for (var j in List.generate(k.length - i, (x) => i + x)) k.substring(i, j)].map((e) => e.split('').map(int.parse)).where((e) => !e.isEmpty).fold([], (p, e) => p + [(e.reduce((v, e) => v + e), e.length - e.reduce((v, e) => v + e))]).toSet();
  final g = w.gcd(b);
  final r = (w / g, b / g);
  print(p.join('\n'));
  print(r);
  print(p.contains(r));
}
