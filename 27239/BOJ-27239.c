#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  printf("%c%d\n", (n - 1) % 8 + 'a', (n - 1) / 8 + 1);
  
  return 0;
}
