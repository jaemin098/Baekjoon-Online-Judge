#include <stdio.h>

int main() {
  int n = 0, i = 1;
  scanf("%d", &n);
  n--;
  
  while(n > 0) {
    n = n - 6 * i;
    i++;
  }
  
  printf("%d", i);
  
  return 0;
}
