#include <stdio.h>

int main(void) {
  int n, m, k;
  scanf("%d%d%d", &n, &m, &k);
  
  int rows = m / n;
  printf("%d\n", rows * k);
  
  return 0;
}
