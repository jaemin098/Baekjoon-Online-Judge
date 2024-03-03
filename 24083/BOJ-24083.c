#include <stdio.h>

int main() {
  int a, b;
  scanf("%d\n%d", &a, &b);
  
  int res = (a + b) % 12 ? (a + b) % 12 : 12;
  printf("%d\n", res);
  
  return 0;
}
