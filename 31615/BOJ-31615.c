#include <stdio.h>

int main(void) {
  int a, b; scanf("%d%d", &a, &b);
  int sum = a + b, cnt = 0;
  
  while(0 < sum) {
    sum /= 10;
    cnt += 1;
  }
  
  printf("%d\n", cnt);
  
  return 0;
}
