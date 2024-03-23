#include <stdio.h>

int main(void) {
  int h, m;
  scanf("%d\n%d", &h, &m);
  
  int res = h * 60 + m;
  printf("%d\n", res);
  
  return 0;
}
