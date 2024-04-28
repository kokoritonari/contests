import 'dart:io';

main() {
  int t = int.parse(stdin.readLineSync()!);
  int n = int.parse(stdin.readLineSync()!);
  List<int> a = List.filled(t + 1, 0);

  for (int i = 0; i < n; i++) {
    var [l, r] = stdin.readLineSync()!.split(' ').map(int.parse).toList();
    a[l]++;
    a[r]--;
  }

  int ans = 0;
  for (int i = 0; i < t; i++) {
    ans += a[i];
    print(ans);
  }
}
