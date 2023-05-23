#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  int sum = 91 + (a * 1) + (b * 3) + (c * 1);
  
  printf("The 1-3-sum is %d", sum);
  
  return 0;
}
