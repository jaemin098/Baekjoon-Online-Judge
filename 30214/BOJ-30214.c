#include <stdio.h>

int main() {
  int s1, s2;
  scanf("%d %d", &s1, &s2);
  
  if((2 * s1) >= s2) {
    printf("E\n");
  }
  else {
    printf("H\n");
  }
  
  return 0;
}
