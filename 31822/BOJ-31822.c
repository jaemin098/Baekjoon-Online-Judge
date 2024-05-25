#include <stdio.h>
#include <string.h>

int main(void) {
  char subc[11]; int n;
  scanf("%s%d", subc, &n);
  
  int ans = 0;
  while(n--) {
    char subav[11]; scanf("%s", subav);
    
    strncmp(subc, subav, 5) == 0 ? ans++ : ans;
  }
  
  printf("%d\n", ans);
  
  return 0;
}
