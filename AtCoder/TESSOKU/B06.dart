import 'dart:io';

main() {
  var r = () => stdin.readLineSync()!.split(' ').map(int.parse).toList();
  var [_, a, [q]] = [r(), r().fold([0], (p, e) => p..add(p.last + e)), r()];
  print([for (var _ = 0; _ < q; _++) ((r) => ((w, c) => w * 2 > c ? 'win' : w * 2 < c ? 'lose' : 'draw')(a[r[1]] - a[r[0] - 1], r[1] - r[0] + 1))(r())].join('\n'));
}
