#include <stdio.h>
#include <stdbool.h>

int main() {
  
  while(true) {
    int n, sum = 0;
    scanf("%d", &n);
    
    if(n == -1) {
      break;
    }
    
    for(int i = 1; i < n; i++) {
      if(n % i == 0) {
        sum = sum + i;
      }
    }
    
    if(sum == n) {
      printf("%d = 1 ", n);
      
      for(int i = 2; i < n; i++) {
        if(n % i == 0) {
          printf("+ %d ", i);
        }
      }
      
      printf("\n");
    }
    
    else {
      printf("%d is NOT perfect.\n", n);
    }
  }
  
  return 0;
}
