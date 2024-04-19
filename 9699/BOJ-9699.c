#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  for(int i = 1; i <= n; i++) {
    int max = 0;
    for(int j = 0; j < 5; j++) {
      int sac; scanf("%d", &sac);
      max < sac ? max = sac : max;
    }
    
    printf("Case #%d: %d\n", i, max);
  }
  
  return 0;
}
