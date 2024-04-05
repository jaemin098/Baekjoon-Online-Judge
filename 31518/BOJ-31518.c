#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  int cnt = 0;
  for(int i = 0; i < 3; i++) {
    int digits[n];
    for(int j = 0; j < n; j++) {
      scanf("%d", &digits[j]);
    }
    
    for(int k = 0; k < n; k++) {
      if(digits[k] == 7) {
        cnt++;
      }
    }
  }
  
  printf("%d\n", cnt == 3 ? 777 : 0);
  
  return 0;
}
