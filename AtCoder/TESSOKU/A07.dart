import 'dart:io';

main() {
  int d = int.parse(stdin.readLineSync()!);
  int n = int.parse(stdin.readLineSync()!);
  List<int> a = List.filled(d + 1, 0);

  for (int i = 0; i < n; i++) {
    var [l, r] = stdin.readLineSync()!.split(' ').map(int.parse).toList();
    a[l - 1]++;
    a[r]--;
  }

  int ans = 0;
  for (int i = 0; i < d; i++) {
    ans += a[i];
    print(ans);
  }
}
