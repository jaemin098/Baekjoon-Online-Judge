#include <stdio.h>

int main(void) {
  int n, m; scanf("%d%d", &n, &m);
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    char s[m + 1]; scanf("%s", s);
    
    for(int j = 0; j < m; j++) {
      if(s[j] == '+') {
        cnt++;
        break;
      }
    }
  }
  
  printf("%d\n", cnt);
  
  return 0;
}
