#include <stdio.h>

int main(void) {
  int w;
  int s;

  printf("正方形の辺の長さ：");
  scanf("%d", &w);

  s = w * w;

  printf("正方形の面積は%dです。\n", s);

  return 0;
}
