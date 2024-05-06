#include <stdio.h>
#include <math.h>

int main(void) {
  int n; scanf("%d", &n);
  
  double vol = 0;
  while(n--) {
    double num; scanf("%lf", &num);
    vol += pow(num, 3);
  }
  
  printf("%.12lf\n", cbrt(vol));
  
  return 0;
}
