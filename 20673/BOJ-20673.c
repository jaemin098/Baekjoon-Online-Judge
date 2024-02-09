#include <stdio.h>

int main(void) {
  int p, q;
  scanf("%d\n%d", &p, &q);
  
  if(p <= 50 && q <= 10) {
    printf("White\n");
  }
  else if(q > 30) {
    printf("Red\n");
  }
  else {
    printf("Yellow\n");
  }
  
  return 0;
}
