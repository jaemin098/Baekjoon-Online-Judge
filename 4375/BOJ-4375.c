#include <stdio.h>

int main() {
  int n;
  
  while(scanf("%d", &n) != EOF) {
    int digit = 1, num = 1;
    
    while(1) {
      if(num % n == 0) {
        break;
      }
      else {
        digit++;
        num = num * 10 + 1;
        num = num % n;
      }
    }
    
    printf("%d\n", digit);
  }
  
  return 0;
}
