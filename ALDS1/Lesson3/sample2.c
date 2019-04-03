#include <stdio.h>
#include <time.h>

int main(void) {
  time_t timer;

  timer = time(&timer);

  puts("現在の時刻は");
  printf("%s", ctime(&timer));
  puts("です。");

  return 0;
}
