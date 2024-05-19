#include <stdio.h>

int main(void) {
  int t, n;
  scanf("%d%d", &t, &n);
  
  int fs = 0;
  while(n--) {
    int f; scanf("%d", &f);
    fs += f;
  }
  
  printf("%s\n", t <= fs ? "Padaeng_i Happy" : "Padaeng_i Cry");
  
  return 0;
}
