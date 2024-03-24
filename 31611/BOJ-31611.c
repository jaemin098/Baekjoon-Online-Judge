#include <stdio.h>

int main(void) {
  int x;
  scanf("%d", &x);
  
  if(x % 7 == 2) {
    printf("%d\n", 1);
  }
  else {
    printf("%d\n", 0);
  }
  
  return 0;
}
