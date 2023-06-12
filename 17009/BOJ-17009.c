#include <stdio.h>

int main() {
  int a = 0, b = 0;
  int scr;
  
  for(int i = 3; i > 0; i--) {
    scanf("%d", &scr);
    a = a + (scr * i);
  }
  
  for(int i = 3; i > 0; i--) {
    scanf("%d", &scr);
    b = b + (scr * i);
  }
  
  if(a > b) {
    printf("A");
  }
  else if(a < b) {
    printf("B");
  }
  else {
    printf("T");
  }
  
  return 0;
}
