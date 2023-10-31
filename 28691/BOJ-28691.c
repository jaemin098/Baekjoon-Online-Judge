#include <stdio.h>

int main() {
  char c;
  scanf("%c", &c);
  
  if(c == 'M') {
    printf("MatKor\n");
  }
  else if(c == 'W') {
    printf("WiCys\n");
  }
  else if(c == 'C') {
    printf("CyKor\n");
  }
  else if(c == 'A') {
    printf("AlKor\n");
  }
  else {
    printf("$clear\n");
  }
  
  return 0;
}
