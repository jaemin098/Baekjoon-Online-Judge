#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  int a[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  
  int m; scanf("%d", &m);
  int res = 0;
  for(int i = 0; i < m; i++) {
    int b; scanf("%d", &b);
    
    res += a[b - 1];
  }
  
  printf("%d\n", res);
  
  return 0;
}
