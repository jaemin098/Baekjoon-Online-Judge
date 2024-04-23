#include <stdio.h>
#include <string.h>

int main(void) {
  int r, c; scanf("%d%d", &r, &c);
  
  int c0 = 0, c1 = 0;
  while(r--) {
    char s[c + 1]; scanf("%s", s);
    int len = strlen(s);
    
    for(int i = 0; i < len; i++) {
      s[i] == '0' ? c0++ : c1++;
    }
  }
  
  printf("%d\n", c0 < c1 ? c0 : c1);
  
  return 0;
}
