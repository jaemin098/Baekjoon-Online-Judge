#include <stdio.h>

int main() {
  int a, p;
  scanf("%d %d", &a, &p);
  
  int amount_axel = a * 7;
  int amount_petra = p * 13;
  
  if(amount_axel > amount_petra) {
    printf("Axel\n");
  }
  else if(amount_petra > amount_axel) {
    printf("Petra\n");
  }
  else {
    printf("lika\n");
  }
  
  return 0;
}
