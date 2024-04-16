#include <stdio.h>
#include <string.h>

int main(void) {
  char str[51]; scanf("%s", str);
  
  int len = strlen(str);
  for(int i = 0; i < len; i++) {
    printf("%c", str[i]);
    i += str[i] - 65;
  }
  
  return 0;
}
