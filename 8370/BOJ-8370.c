#include <stdio.h>

int main() {
  int n1, k1, n2, k2;
  scanf("%d %d %d %d", &n1, &k1, &n2, &k2);
  
  int avl_seats = (n1 * k1) + (n2 * k2);
  
  printf("%d", avl_seats);
  
  return 0;
}
