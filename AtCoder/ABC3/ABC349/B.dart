import 'dart:io';

main() {
  final a = stdin.readLineSync()!.split('').fold({}, (m, e) {
    m[e] = (m[e] ?? 0) + 1;
    return m;
  }).entries.fold({}, (m, e) {
    if (m[e.value] == null)
      m[e.value] = [e.key];
    else
      m[e.value].add(e.key);
    return m;
  }).entries.every((e) => e.value.length == 2);

  print(a ? "Yes" : "No");
}
