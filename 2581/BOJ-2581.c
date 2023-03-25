#include <stdio.h>

int main() {
  int m, n;
  int min = 0, sum = 0;
  
  scanf("%d", &m);
  scanf("%d", &n);
  
  for(int i = m; i <= n; i++) {
    
    for(int j = 2; j < i; j++) {
      if(i % j == 0) {
        break;
      }
      
      if(j == i - 1) {
        sum = sum + i;
        
        if(min == 0) {
          min = i;
        }
      }
    }
    
    if(i == 2) {
      sum = sum + i;
      min = i;
    }
  }
  
  if(min != 0) {
    printf("%d\n%d", sum, min);
  }
  else {
    printf("-1\n");
  }
  
  return 0;
}
