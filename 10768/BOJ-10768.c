#include <stdio.h>

int main() {
  int m, d;
  scanf("%d\n%d", &m, &d);
  
  if(m < 2) {
    printf("Before");
  }
  else if(m == 2) {
    if(d == 18) {
      printf("Special");
    }
    else if(d < 18) {
      printf("Before");
    }
    else {
      printf("After");
    }
  }
  else {
    printf("After");
  }
  
  return 0;
}
