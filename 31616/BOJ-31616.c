#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  char s[n + 1]; scanf("%s", s);
  
  int flag = 0;
  for(int i = 1; i < n; i++) {
    if(s[0] != s[i]) {
      flag = 1;
      break;
    }
  }
  
  printf((flag == 1) ? "No\n" : "Yes\n");
  
  return 0;
}
