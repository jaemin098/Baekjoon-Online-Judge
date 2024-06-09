#include <stdio.h>

int main(void) {
  int t; scanf("%d", &t);
  
  while(t--) {
    int s, n;
    scanf("%d%d", &s, &n);
    int total = 0; total += s;
    
    while(n--) {
      int q, p;
      scanf("%d%d", &q, &p);
      total += q * p;
    }
    
    printf("%d\n", total);
  }
  
  return 0;
}
