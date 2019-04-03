#include <stdio.h>

int main() {
  int x, y;

  printf("Coordinate of x: ");
  scanf("%d", &x);
  printf("Coordinate of y: ");
  scanf("%d", &y);

  if (y > 0) {
    if (x > 0) {
      puts("1st quadrant");
    } else if (x < 0) {
      puts("2nd quadrant");
    } else {
      puts("On the axis");
    }
  } else if (y < 0) {
    if (x < 0) {
      puts("3rd quadrant");
    } else if (x > 0) {
      puts("4th quadrant");
    } else {
      puts("On the axis");
    }
  } else {
    puts("On the axis");
  }
}
