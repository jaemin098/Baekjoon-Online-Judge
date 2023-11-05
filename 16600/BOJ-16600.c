#include <stdio.h>
#include <math.h>

int main() {
  double square;
  scanf("%lf", &square);
  
  double perimeter = 4 * sqrt(square);
  printf("%.8lf\n", perimeter);
  
  return 0;
}
