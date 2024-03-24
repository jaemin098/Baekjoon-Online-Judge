#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d\n%d\n%d", &a, &b, &c);
  
  int prc_candy = a * b;
  int ttl_price = prc_candy + (1 * c);
  
  printf("%d\n", ttl_price);
  
  return 0;
}
