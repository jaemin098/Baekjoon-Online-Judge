#include <stdio.h>

int main(void) {
  int a, b, c; scanf("%d%d%d", &a, &b, &c);
  
  printf((a + b == c) || (a + c == b) || (b + c == a) ? "1\n" : "0\n");
  
  return 0;
}
