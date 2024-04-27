import 'dart:io';

main() {
  final n = int.parse(stdin.readLineSync()!);
  print([for (var _ in List.generate(n, (_) => _)) stdin.readLineSync()!.split(' ').map(int.parse).indexed.where((e) => e.$2 == 1).map((e) => -~e.$1).join(' ')].join('\n'));
}
