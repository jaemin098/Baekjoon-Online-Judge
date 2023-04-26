#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  int k = 0, time = 0;
  while(n != 0) {
    k++;
    if(n < k) {
      k = 1;
    }
    n = n - k;
    time++;
  }
  
  printf("%d", time);
  
  return 0;
}
