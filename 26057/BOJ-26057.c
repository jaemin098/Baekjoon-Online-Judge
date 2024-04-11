#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long l, t;
  scanf("%ld%ld", &l, &t);
  
  printf("%ld\n", labs(l - (t * 2)));
  
  return 0;
}
