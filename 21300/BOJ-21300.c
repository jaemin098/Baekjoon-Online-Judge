#include <stdio.h>

int main() {
  int conts[6] = {0, };
  int refund = 0;
  
  for(int i = 0; i < 6; i++) {
    scanf("%d", &conts[i]);
    refund += conts[i] * 5;
  }
  
  printf("%d", refund);
  
  return 0;
}
