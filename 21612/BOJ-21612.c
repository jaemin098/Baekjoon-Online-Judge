#include <stdio.h>

int main() {
  int b;
  scanf("%d", &b);
  
  int p = (5 * b) - 400;
  
  if(p < 100) {
    printf("%d\n", p);
    printf("1");
  }
  else if(p > 100) {
    printf("%d\n", p);
    printf("-1");
  }
  else if(p == 100) {
    printf("%d\n", p);
    printf("0");
  }
  
  return 0;
}
