#include <stdio.h>

int main(void) {
  int t; scanf("%d", &t);
  
  while(t--) {
    int a[7], sum = 0, minn = 101;
    
    for(int i = 0; i < 7; i++) {
      scanf("%d", &a[i]);
      
      if(a[i] % 2 == 0) {
        sum += a[i];
        
        if(a[i] < minn) {
          minn = a[i];
        }
      }
    }
    printf("%d %d\n", sum, minn);
  }
  
  return 0;
}
