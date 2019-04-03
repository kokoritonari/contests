#include <stdio.h>

int main() {
  char ch;

  printf("Input alphabet: ");
  scanf("%c", &ch);

  if ('a' <= ch && ch <= 'z') {
    ch = ch - ('c' - 'C');
    printf("大文字に変換すると%cです\n", ch);
  } else if ('A' <= ch && ch <= 'Z') {
    ch = ch + ('c' - 'C');
    printf("小文字に変換すると%cです\n", ch);
  } else {
    puts("正しく入力して下さい。");
  }

  return 0;
}
