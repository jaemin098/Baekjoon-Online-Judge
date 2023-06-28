#include <stdio.h>

int main() {
  int sum = 0;
  
  while(1) {
    int a;
    scanf("%d", &a);
    
    if(a == -1) {
      break;
    }
    else {
      sum = sum + a;
    }
  }
  
  printf("%d", sum);
  
  return 0;
}
