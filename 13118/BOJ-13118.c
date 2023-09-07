#include <stdio.h>

int main() {
  int p1, p2, p3, p4;
  scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
  
  int x = 0, y = 0, r = 0;
  scanf("%d %d %d", &x, &y, &r);
  
  if(p1 == x) {
    printf("%d", 1);
  }
  else if(p2 == x) {
    printf("%d", 2);
  }
  else if(p3 == x) {
    printf("%d", 3);
  }
  else if(p4 == x) {
    printf("%d", 4);
  }
  else {
    printf("%d", 0);
  }
  
  return 0;
}
