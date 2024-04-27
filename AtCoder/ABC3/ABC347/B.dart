import 'dart:io';

main() {
  final s = stdin.readLineSync()!;
  print([for (var i in List.generate(s.length, (i) => -~i)) for (var j in List.generate(-~s.length - i, (j) => j)) s.substring(j, i + j)].toSet().length);
}
