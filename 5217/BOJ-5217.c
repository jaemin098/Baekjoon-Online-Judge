#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  
  for(int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    
    printf("Pairs for %d:", n);
    
    int cnt = 0;
    
    for(int j = 1; j < n / 2 + 1; j++) {
      if(j == n - j || n - j == 0) {
        continue;
      }
      else if(cnt++) {
        printf(",");
      }
      
      printf(" %d %d", j, n - j);
    }
    
    printf("\n");
  }
  
  return 0;
}
