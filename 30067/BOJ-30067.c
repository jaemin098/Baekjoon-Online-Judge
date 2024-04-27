#include <stdio.h>

int main(void) {
  int ans = 0, it = 10;
  while(it--) {
    int n; scanf("%d", &n);
    ans += n;
  }
  
  printf("%d\n", ans / 2);
  
  return 0;
}
