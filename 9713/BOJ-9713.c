#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  
  for(int i = 0; i < t; i++) {
    int n, sum = 0;
    scanf("%d", &n);
    
    for(int j = 0; j <= n; j++) {
      if(j % 2 == 1) {
        sum = sum + j;
      }
    }
    
    printf("%d\n", sum);
  }
  
  return 0;
}
