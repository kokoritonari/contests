#include <stdio.h>
#include <time.h>

int main() {
  time_t t1, t2;
  struct tm *t;

  t1 = time(&t1);

  puts("現在の時刻は");
  printf("%s", ctime(&t1));
  puts("です。");

  t = localtime(&t1);
  t->tm_mday = t->tm_mday + 100;
  t2 = mktime(t);

  puts("100日後は");
  printf("%s", ctime(&t2));
  puts("です。");
  
  return 0;
}
