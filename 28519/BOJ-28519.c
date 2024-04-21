#include <stdio.h>

int main(void) {
  int n, m; scanf("%d%d", &n, &m);
  
  int ans = 0;
  n < m ? (ans = 2 * n) : (ans = 2 * m);
  
  printf("%d\n", n != m ? ans += 1 : ans);
  
  return 0;
}
