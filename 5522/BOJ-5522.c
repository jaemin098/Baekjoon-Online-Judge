#include <stdio.h>

int main() {
  int score[5] = {0, };
  int total = 0;
  
  for(int i = 0; i < 5; i++) {
    scanf("%d", &score[i]);
    total = total + score[i];
  }
  
  printf("%d", total);
  
  return 0;
}
