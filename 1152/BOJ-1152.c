#include <stdio.h>
#include <string.h>

int main() {
  char a[1000001];
  int cnt = 0;
  
  scanf("%[^\n]s", a);
  
  if(a[0] != ' ') {
    cnt++;
  }
  
  for(int i = 1; i < strlen(a); i++) {
    if(a[i - 1] == ' ' && a[i] != ' ') {
      cnt++;
    }
  }
    
    printf("%d", cnt);
    
    return 0;
}
