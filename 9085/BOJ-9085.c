#include <stdio.h>

int main(void) {
  int t; scanf("%d", &t);
  
  while(t--) {
    int n, sum = 0;
    scanf("%d", &n);
    
    while(n--) {
      int num; scanf("%d", &num);
      sum += num;
    }
    
    printf("%d\n", sum);
  }
  
  return 0;
}
