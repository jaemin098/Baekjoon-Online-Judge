#include <stdio.h>

int main() {
  int n, cnt = 0;
  scanf("%d", &n);
  
  while(n--) {
    int num, i;
    scanf("%d", &num);
    
    for(i = 2; i < num; i++) {
      if(num % i == 0) {
        break;
      }
    }
    if(i == num) {
      cnt++;
    }
  }
  
  printf("%d\n", cnt);
  
  return 0;
}
