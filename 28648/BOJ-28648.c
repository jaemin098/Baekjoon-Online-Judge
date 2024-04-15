#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  int min = 200;
  while(n--) {
    int t, l; scanf("%d%d", &t, &l);
    
    t + l <= min ? min = t + l : min;
  }
  
  printf("%d\n", min);
  
  return 0;
}
