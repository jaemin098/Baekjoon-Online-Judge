#include <stdio.h>

void fib(int n) {
  int las = 0, curr = 1, res = 0;
  for(int i = 0; i <= n; i++) {
    las = curr;
    curr = res;
    res = las + curr;
  }
  
  printf("%d %d\n", las, curr);
}

int main() {
  int t;
  scanf("%d", &t);
  
  for(int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    
    fib(n);
  }
  
  return 0;
}
