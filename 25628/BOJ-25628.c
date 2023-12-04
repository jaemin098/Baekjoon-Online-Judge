#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  
  int res = 0;
  if((a / 2) < b) {
    res = a / 2;
  }
  else {
    res = b;
  }
  
  printf("%d\n", res);
  
  return 0;
}
