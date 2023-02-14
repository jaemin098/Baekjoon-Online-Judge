#include <stdio.h>

int main() {
  int min 1000001;
  int max -1000001;
  
  int n, input;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d", &input);
    
    if(input < min) {
      min = input;
    }
    
    if(input > max) {
      max = input;
    }
    
  }
  
  printf("%d %d", min, max);
  
  return 0;
}
