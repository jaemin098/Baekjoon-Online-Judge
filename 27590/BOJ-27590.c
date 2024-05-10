#include <stdio.h>

int main(void) {
  int ds, ys, dm, ym;
  scanf("%d%d%d%d", &ds, &ys, &dm, &ym);
  
  int sun = ys - ds, moon = ym - dm;
  
  while(sun != moon) {
    sun < moon ? (sun += ys) : (moon += ym);
  }
  
  printf("%d\n", sun);
  
  return 0;
}
