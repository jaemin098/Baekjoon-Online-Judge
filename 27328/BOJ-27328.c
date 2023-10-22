#include <stdio.h>

int main() {
  int a, b;
  scanf("%d\n%d", &a, &b);
  
  if(a < b) {
    printf("-1\n");
  }
  else if(a == b) {
    printf("0\n");
  }
  else if(a > b) {
    printf("1\n");
  }
  
  return 0;
}
