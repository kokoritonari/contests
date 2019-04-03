#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned) time(NULL));

  puts("アルファベットを表示します。");
  printf("今回のアルファベットは%cです。\n", rand() % 26 + 'A');

  return 0;
}
