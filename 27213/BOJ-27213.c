#include <stdio.h>

int main(void) {
  int m, n; scanf("%d%d", &m, &n);
  
  printf("%d\n", (m == 1 || n == 1) ? m + n - 1 : 2 * (m + n) - 4);
  
  return 0;
}
