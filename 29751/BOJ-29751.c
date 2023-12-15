#include <stdio.h>

int main() {
  int w, h;
  scanf("%d %d", &w, &h);
  
  float area = (w * h) * 0.5;
  printf("%.1f\n", area);
  
  return 0;
}
