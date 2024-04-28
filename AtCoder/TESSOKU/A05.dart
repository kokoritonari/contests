import 'dart:io';

main() {
  var [n, k] = stdin.readLineSync()!.split(' ').map(int.parse).toList();
  print([for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) if (0 < k - i - j && k - i - j <= n) 1].length);
}
