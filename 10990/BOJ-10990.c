#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < (n - 1) - i; j++) {
      printf(" ");
    }
    printf("*");
    
    for(int k = 0; k < (2 * i) - 1; k++) {
      printf(" ");
    }
    
    if(i != 0) {
      printf("*");
    }
    
    printf("\n");
  }
  
  return 0;
}
