#include <stdio.h>

int main(void) {
  int n, k, a, b;
  scanf("%d%d%d%d", &n, &k, &a, &b);
  
  int st_time = (n - 1) * a;
  int ev_time = (n - 1) * b + (k - 1) * b;
  
  printf("%d %d\n", ev_time, st_time);
  
  return 0;
}
