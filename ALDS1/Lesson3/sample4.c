#include <stdio.h>

int main() {
  char ch;

  printf("Input alphabet: ");
  scanf("%c", &ch);

  ch = ch - ('c' - 'C');

  printf("大文字に変換すると%cです\n", ch);

  return 0;
}
