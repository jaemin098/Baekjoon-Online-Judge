#include <stdio.h>

int main() {
  int ans, val;
  int row, col;
  
  row = col = 1;
  
  for(int x = 1; x <= 9; ++x) {
    for(int y = 1; y <= 9; ++y) {
      scanf("%d", &val);
      
      if(ans < val) {
        ans = val;
        row = x;
        col = y;
      }
    }
  }
  
  printf("%d\n%d %d\n", ans, row, col);
  
  return 0;
}
