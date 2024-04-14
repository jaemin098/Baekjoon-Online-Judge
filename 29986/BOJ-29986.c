#include <stdio.h>

int main(void) {
  int n, h; scanf("%d%d", &n, &h);
  
  int ans = 0;
  while(n--) {
    int a; scanf("%d", &a);
    a <= h ? ans++ : ans;
  }
  
  printf("%d\n", ans);
  
  return 0;
}
