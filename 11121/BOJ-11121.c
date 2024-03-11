#include <stdio.h>
#include <string.h>

int main() {
  int t; scanf("%d", &t);
  
  while(t--) {
    char ipt[121] = {0, }, opt[121] = {0, };
    scanf("%s %s", ipt, opt);
    
    int err = 0;
    for(int i = 0; i < (int)strlen(ipt); i++) {
      if(ipt[i] != opt[i]) {
        err = 1;
        break;
      }
    }
    
    if(err) {
      printf("ERROR\n");
    }
    else {
      printf("OK\n");
    }
  }
  
  return 0;
}
