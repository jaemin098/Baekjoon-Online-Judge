#include <stdio.h>

int main() {
  int point_w = 0, point_b = 0;
  for(int i = 0; i < 8; i++) {
    char c[9];
    scanf("%s", c);
    for(int j = 0; j < 8; j++) {
      if(c[j] == 'K') {
        point_w += 0;
      }
      else if(c[j] == 'P') {
        point_w += 1;
      }
      else if(c[j] == 'N') {
        point_w += 3;
      }
      else if(c[j] == 'B') {
        point_w += 3;
      }
      else if(c[j] == 'R') {
        point_w += 5;
      }
      else if(c[j] == 'Q') {
        point_w += 9;
      }
      else if(c[j] == 'k') {
        point_b += 0;
      }
      else if(c[j] == 'p') {
        point_b += 1;
      }
      else if(c[j] == 'n') {
        point_b += 3;
      }
      else if(c[j] == 'b') {
        point_b += 3;
      }
      else if(c[j] == 'r') {
        point_b += 5;
      }
      else if(c[j] == 'q') {
        point_b += 9;
      }
      else {
        continue;
      }
    }
  }
  
  int ans = 0; ans = point_w - point_b;
  printf("%d\n", ans);
  
  return 0;
}
