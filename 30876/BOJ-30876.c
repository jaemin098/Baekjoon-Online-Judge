#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  int ymin = 1001, xa = 0, ya = 0;
  while(n--) {
    int x, y; scanf("%d%d", &x, &y);
    if(y < ymin) {
      ymin = y;
      xa = x, ya = y;
    }
  }
  
  printf("%d %d\n", xa, ya);
  
  return 0;
}
