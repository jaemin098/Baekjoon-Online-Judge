#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  
  int k = 1;
  while(1) {
    if((k - 1) * (k) / 2 < x && x <= (k) * (k + 1) / 2) {
      break;
    }
    k++;
  }
  
  if(k % 2 != 0) {
    int a = k * (k + 1) / 2;
    printf("%d", a - x + 1);
    printf("/");
    printf("%d", k - (a - x));
  }
  else {
    int b = k * (k + 1) / 2;
    printf("%d", k - (b - x));
    printf("/");
    printf("%d", b - x + 1);
  }
  
  return 0;
}
