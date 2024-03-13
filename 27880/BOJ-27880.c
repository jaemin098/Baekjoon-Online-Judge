#include <stdio.h>
#include <string.h>

const char es[3] = "Es";
const char sta[6] = "Stair";

int main() {
  int depth = 0;
  
  for(int i = 0; i < 4; i++) {
    char str[6]; int x = 0;
    scanf("%s %d", str, &x);
    
    if(strcmp(str, es) == 0) {
      depth = depth + (21 * x);
    }
    else if(strcmp(str, sta) == 0) {
      depth = depth + (17 * x);
    }
  }
  
  printf("%d\n", depth);
  
  return 0;
}
