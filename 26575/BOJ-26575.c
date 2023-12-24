#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    /* d, f and p: number of "dogs", amount of "food" per dog,
      "price" of the food */
    double d, f, p;
    scanf("%lf %lf %lf", &d, &f, &p);
    
    double total = d * f * p;
    printf("%c%.2f\n", '$', total);
  }
  
  return 0;
}
