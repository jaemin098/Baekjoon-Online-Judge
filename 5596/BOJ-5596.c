#include <stdio.h>

int main() {
  int s = 0;
  for(int i = 0; i < 4; i++) {
    int tmp;
    scanf("%d", &tmp);
    s = s + tmp;
  }
  
  int t = 0;
  for(int i = 0; i < 4; i++) {
    int tmp;
    scanf("%d", &tmp);
    t = t + tmp;
  }
  
  if(s > t) {
    printf("%d", s);
  }
  else if(t > s) {
    printf("%d", t);
  }
  else {
    printf("%d", s);
  }
  
  return 0;
}
