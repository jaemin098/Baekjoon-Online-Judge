#include <stdio.h>

int main() {
  int t, s;
  scanf("%d %d", &t, &s);
  
  int fg = 0;
  if(t >= 12 && t <= 16) {
    fg = 1;
  }
  
  if(fg == 0) {
    printf("280");
  }
  else if(fg == 1) {
    if(s == 0) {
      printf("320");
    }
    else {
      printf("280");
    }
  }
  
  return 0;
}
