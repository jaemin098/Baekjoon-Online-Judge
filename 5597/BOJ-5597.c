#include <stdio.h>

int main() {
  int std[30] = {0, };
  int chk;
  
  for(int i = 0; i < 28; i++) {
    scanf("%d", &chk);
    std[chk - 1] = chk;
  }
  
  for(int i = 0; i < 30; i++) {
    if(std[i] == 0) {
      printf("%d\n", i + 1);
    }
  }
  
  return 0;
}
