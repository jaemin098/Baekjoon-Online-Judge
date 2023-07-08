#include <stdio.h>

int main() {
  int day;
  scanf("%d", &day);
  
  int cn[5] = {0, };
  for(int i = 0; i < 5; i++) {
    scanf("%d ", &cn[i]);
  }
  
  int cnt = 0;
  for(int i = 0; i < 5; i++) {
    if(cn[i] == day) {
      cnt++;
    }
  }
  
  printf("%d", cnt);
  
  return 0;
}
