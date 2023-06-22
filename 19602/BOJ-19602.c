#include <stdio.h>

int main() {
  int s, m, l;
  scanf("%d %d %d", &s, &m, &l);
  
  int score = (1 * s) + (2 * m) + (3 * l);
  
  if(score >= 10) {
    printf("happy");
  }
  else {
    printf("sad");
  }
  
  return 0;
}
