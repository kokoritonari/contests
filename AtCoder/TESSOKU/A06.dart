import 'dart:io';

main() {
  var r = () => stdin.readLineSync()!.split(' ').map(int.parse).toList();
  var [[_, q], a] = [r(), r().fold([0], (p, e) => p..add(p.last + e))];
  print([for (var i = 0; i < q; i++) ((l) => a[l[1]] - a[l[0] - 1])(r())].join('\n'));
}
