#include <stdio.h>

int main() {
  int z;
  scanf("%d", &z);
  
  for(int i = 0; i < z; i++) {
    int w, k;
    scanf("%d %d", &w, &k);
    
    printf("%d\n", (w * k) / 2);
  }
  
  return 0;
}
