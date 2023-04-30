#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  c = c + d;
  
  if(c > 59) {
    b = b + (c / 60);
    c = c % 60;
  }
  if(b > 59) {
    a = a + (b / 60);
    b = b % 60;
  }
  if(a > 23) {
    a = a % 24;
  }
  
  printf("%d %d %d", a, b, c);
  
  return 0;
}
