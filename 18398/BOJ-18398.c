#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  
  while(t--) {
    int n;
    scanf("%d", &n);
    
    while(n--) {
      int a, b;
      scanf("%d %d", &a, &b);
      
      printf("%d ", a + b);
      printf("%d\n", a * b);
    }
  }
  
  return 0;
}
