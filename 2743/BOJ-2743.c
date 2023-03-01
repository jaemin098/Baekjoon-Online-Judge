#include <stdio.h>
#include <string.h>

int main() {
  char ahp[102];
  int size;
  
  scanf("%s", ahp);
  
  for(int a = 0; ; a++) {
    if(ahp[a] == '\0') {
      break;
    }
  }
  
  size = strlen(ahp);
  printf("%d\n", size);
  
  return 0;
}
