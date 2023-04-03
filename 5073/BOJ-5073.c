#include <stdio.h>

int main() {
  while(1) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == 0 && b == 0 && c == 0) {
      break;
    }
    
    else if(a >= b + c || b >= c + a || c >= b + a) {
      printf("Invalid\n");
    }
    
    else if(a == b && b == c && c == a) {
      printf("Equilateral\n");
    }
    
    else if(a == b || b == c || c == a) {
      printf("Isosceles\n");
    }
    
    else if(a != b && b != c && c != a) {
      printf("Scalene\n");
    }
  }
  
  return 0;
}
