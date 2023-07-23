#include <stdio.h>

int main() {
  int l;
  scanf("%d", &l);
  
  int t = 0;
  if(l % 5 == 0) {
    t = (l / 5);
  }
  else {
    t = (l / 5) + 1;
  }
  
  printf("%d", t);
  
  return 0;
}
