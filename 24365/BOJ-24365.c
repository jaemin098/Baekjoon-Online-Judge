#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  int avg = (a + b + c) / 3;
  int res = (avg - a) + (avg - (b - (avg - a)));
  
  printf("%d\n", res);
  
  return 0;
}
