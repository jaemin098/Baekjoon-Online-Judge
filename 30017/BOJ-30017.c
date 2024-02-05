#include <stdio.h>

int main() {
  int a = 0, b = 0;
  scanf("%d %d", &a, &b);
  
  a = a - 2, b = b - 1;
  int size = 3;
  
  int c = 0;
  if(b > a) {
    c = a;
  }
  else {
    c = b;
  }
  
  size = size + (2 * c);
  printf("%d\n", size);
  
  return 0;
}
