import 'dart:io';

main() {
  var r = () => stdin.readLineSync()!.split(' ');
  var x = r()[1];
  print(r().contains(x) ? 'Yes' : 'No');
}
