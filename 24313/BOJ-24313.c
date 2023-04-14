#include <stdio.h>

int main() {
  int a1, a0;
  scanf("%d %d", &a1, &a0);
  
  int c;
  scanf("%d", &c);
  
  int n0;
  scanf("%d", &n0);
  
  if(a1 * n0 + a0 <= c * n0 && c >= a1) {
    printf("1");
  }
  else {
    printf("0");
  }
  
  return 0;
}
