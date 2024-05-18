#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool l = false, k = false, p = false;
  
  for(int i = 0; i < 3; i++) {
    char s[21]; scanf("%s", s);
    
    if(s[0] == 'l') {
      l = true;
    }
    else if(s[0] == 'k') {
      k = true;
    }
    else if(s[0] == 'p') {
      p = true;
    }
  }
  
  printf("%s\n", l && k && p ? "GLOBAL" : "PONIX");
  
  return 0;
}
