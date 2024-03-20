#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  
  for(int it = 0; it < n; it++) {
    int i, f;
    scanf("%d %d", &i, &f);
    
    if(i <= 1 && f <= 2) {
      printf("Yes\n");
    }
    else if(i <= 2 && f <= 1) {
      printf("Yes\n");
    }
    else {
      printf("No\n");
    }
  }
  
  return 0;
}
