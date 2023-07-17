#include <stdio.h>

int main() {
  int input, sum = 0;
  
  for(int i = 0; i < 4; i++) {
    scanf("%d", &input);
    sum = sum + input;
  }
  
  printf("%d\n", sum / 60);
  printf("%d", sum % 60);
  
  return 0;
}
