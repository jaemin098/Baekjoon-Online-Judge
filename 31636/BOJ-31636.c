#include <stdio.h>
#include <string.h>

int main(void) {
  int n; scanf("%d", &n);
  char s[n + 1]; scanf("%s", s);
  
  char *ptr = strstr(s, "ooo");
  
  if(ptr != NULL) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  
  return 0;
}
