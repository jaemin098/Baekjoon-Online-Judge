#include <stdio.h>
#include <string.h>

int main(void) {
  int lv; char s[8];
  scanf("%d%s", &lv, s);
  
  int score = 0;
  if(strcmp(s, "miss") == 0) {
    score = 0;
  }
  else if(strcmp(s, "bad") == 0) {
    score = lv * 200;
  }
  else if(strcmp(s, "cool") == 0) {
    score = lv * 400;
  }
  else if(strcmp(s, "great") == 0) {
    score = lv * 600;
  }
  else if(strcmp(s, "perfect") == 0) {
    score = lv * 1000;
  }
  
  printf("%d\n", score);
  
  return 0;
}
