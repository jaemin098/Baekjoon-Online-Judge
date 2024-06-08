#include <stdio.h>
#include <math.h>

int main(void) {
  int w, h;
  scanf("%d%d", &w, &h);
  double n; int a, b;
  scanf("%lf%d%d", &n, &a, &b);
  
  if(w < a || h < b) {
    printf("-1\n");
  }
  else {
    int max_rects = (w / a) * (h / b);
    double pages = n / max_rects;
    printf("%d\n", (int)ceil(pages));
  }
  
  return 0;
}
