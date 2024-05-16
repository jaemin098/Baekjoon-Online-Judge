#include <stdio.h>

int main(void) {
  int t; scanf("%d", &t);
  
  while(t--) {
    int g, c, e;
    scanf("%d%d%d", &g, &c, &e);
    
    printf("%d\n", e <= c ? 0 : (e - c) * (2 * g - 1));
  }
  
  return 0;
}
