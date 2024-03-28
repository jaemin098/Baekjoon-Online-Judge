#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  
  char s[n + 1], t[n + 1];
  scanf("%s", s);
  scanf("%s", t);
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] != t[i]) {
      cnt += 1;
    }
  }
  
  printf("%d\n", cnt);
  
  return 0;
}
