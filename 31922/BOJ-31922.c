#include <stdio.h>

int main(void) {
  int a, p, c;
  scanf("%d%d%d", &a, &p, &c);
  
  printf("%d\n", p < a + c ? a + c : p);
  
  return 0;
}
