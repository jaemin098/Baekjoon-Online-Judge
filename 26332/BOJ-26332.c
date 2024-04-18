#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  while(n--) {
    int c, p; scanf("%d%d", &c, &p);
    
    if(2 <= c) {
      printf("%d %d\n%d\n", c, p, p * c - (2 * (c - 1)));
    }
    else {
      printf("%d %d\n%d\n", c, p, p * c);
    }
  }
  
  return 0;
}
