#include <stdio.h>

int main(void) {
  int votes[5];
  for(int i = 0; i < 5; i++) {
    scanf("%d", &votes[i]);
  }
  
  int cnt = 0;
  for(int i = 1; i < 5; i++) {
    cnt += (votes[0] - 1000 <= votes[i]);
  }
  
  printf("%d\n", cnt);
  
  return 0;
}
