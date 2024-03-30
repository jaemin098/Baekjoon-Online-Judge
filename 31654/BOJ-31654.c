#include <stdio.h>

int main(void) {
  long a, b, c;
  scanf("%ld %ld %ld", &a, &b, &c);
  
  a + b == c ? puts("correct!") : puts("wrong!");
  
  return 0;
}
