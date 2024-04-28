#include <stdio.h>

int main(void) {
  int g, p, t;
  scanf("%d%d%d", &g, &p, &t);
  
  int grptk = p * t + g, onetk = g * p;
  int ans = (onetk < grptk) ? 1 : (grptk < onetk ? 2 : 0);
  
  printf("%d\n", ans);
  
  return 0;
}
