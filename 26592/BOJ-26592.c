#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  while(n--) {
    float a, b; scanf("%f%f", &a, &b);
    float h = a * 2 / b;
    
    printf("The height of the triangle is %.2f units\n", h);
  }
  
  return 0;
}
