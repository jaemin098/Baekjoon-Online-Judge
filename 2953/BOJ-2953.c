#include <stdio.h>

int main() {
  int max = 0, max_pos;
  
  for(int i = 0; i < 5; i++) {
    int sum = 0;
    
    for(int j = 0; j < 4; j++) {
      int pt;
      scanf("%d", &pt);
      
      sum = sum + pt;
      if(sum > max) {
        max = sum;
        max_pos = i + 1;
      }
    }
  }
  
  printf("%d %d", max_pos, max);
  
  return 0;
}
