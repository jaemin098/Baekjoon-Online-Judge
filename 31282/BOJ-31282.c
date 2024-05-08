#include <stdio.h>

int main(void) {
  int n, m, k;
  scanf("%d%d%d", &n, &m, &k);
  
  printf("%d\n", (n + k - m - 1) / (k - m));
  
  return 0;
}
