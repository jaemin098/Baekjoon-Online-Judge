#include <stdio.h>

int main() {
  int n, total = 0;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    int w;
    scanf("%d", &w);
    
    total += w;
  }
  
  if(total % 3 == 0) {
    printf("yes");
  }
  else {
    printf("no");
  }
  
  return 0;
}
