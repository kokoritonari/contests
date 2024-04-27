import 'dart:io';

main() {
  final n = int.parse(stdin.readLineSync()!.split(' ')[0]);
  final t = stdin.readLineSync()!.split(' ').map(int.parse);

  final l = t.fold<List<int>>(List.filled(n, 0), (l, e) {
    l[~-e] = ~l[~-e];
    return l;
  });

  print(n + l.reduce((v, e) => v + e));
}
