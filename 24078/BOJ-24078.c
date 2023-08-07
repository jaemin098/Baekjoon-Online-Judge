#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  
  int remain = (x % 21);
  printf("%d", remain);
  
  return 0;
}
