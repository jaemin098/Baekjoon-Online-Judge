#include <stdio.h>

int main(void) {
  int h1, b1, h2, b2;
  scanf("%d%d%d%d", &h1, &b1, &h2, &b2);
  
  int p1scr = 3 * h1 + b1, p2scr = 3 * h2 + b2;
  
  if(p2scr < p1scr) {
    printf("1 %d\n", p1scr - p2scr);
  }
  else if(p1scr < p2scr) {
    printf("2 %d\n", p2scr - p1scr);
  }
  else {
    printf("NO SCORE\n");
  }
  
  return 0;
}
