#include <stdio.h>

int main() {
  char ch;

  printf("文字を入力して下さい：");
  scanf("%c", &ch);

  if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
    puts("演算子です");
  } else if ('0' <= ch && ch <= '9') {
    puts("数値です");
  } else {
    puts("不明です");
  }
}
