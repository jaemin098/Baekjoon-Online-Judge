#include <stdio.h>

int main() {
  int s, t, d;
  scanf("%d %d %d", &s, &t, &d);
  
  int f = d / (2 * s) * t;
  printf("%d", f);
  
  return 0;
}
