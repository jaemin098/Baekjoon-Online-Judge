#include <stdio.h>

int main() {
  int a, i;
  scanf("%d %d", &a, &i);
  
  int ans = a * (i - 1) + 1;
  printf("%d", ans);
  
  return 0;
}
