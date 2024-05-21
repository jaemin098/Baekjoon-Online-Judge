#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n; scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    int d; scanf("%d", &d);
    
    int cns[d];
    for(int j = 0; j < d; j++) {
      scanf("%d", &cns[j]);
    }
    
    printf("Denominations: ");
    for(int k = 0; k < d; k++) {
      printf("%d ", cns[k]);
    }
    printf("\n");
    
    bool isTwice = true; int prev = cns[0];
    for(int l = 1; l < d; l++) {
      if(cns[l] < 2 * prev) {
        isTwice = false;
        break;
      }
      prev = cns[l];
    }
    
    if(isTwice) {
      printf("Good coin denominations!\n\n");
    }
    else {
      printf("Bad coin denominations!\n\n");
    }
  }
  
  return 0;
}
