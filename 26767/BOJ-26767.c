#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  for(int i = 1; i <= n; i++) {
    if(i % 7 == 0 && i % 11 == 0) {
      puts("Wiwat!");
    }
    else if(i % 7 == 0) {
      puts("Hurra!");
    }
    else if(i % 11 == 0) {
      puts("Super!");
    }
    else {
      printf("%d\n", i);
    }
  }
  
  return 0;
}
