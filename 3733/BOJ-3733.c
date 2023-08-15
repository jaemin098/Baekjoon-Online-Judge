#include <stdio.h>

int main() {
  int n = 0;
  int s = 0;
  
  while(scanf("%d %d", &n, &s) != EOF) {
    int x = s / (n + 1);
    printf("%d\n", x);
  }
  
  return 0;
}
