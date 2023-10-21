#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  int sum = 0;
  while(n--) {
    int num;
    scanf("%d", &num);
    
    sum += num;
  }
  
  printf("%d\n", sum);
  
  return 0;
}
