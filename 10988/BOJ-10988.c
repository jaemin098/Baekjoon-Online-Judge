#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define true 1
#define false 0

int main() {
  char str[MAX_LENGTH];
  int result = true;
  
  scanf("%s", str);
  
  for(int i = 0; i < strlen(str) / 2; i++) {
    if(str[i] != str[strlen(str) - 1 - i]) {
      result = false;
    }
  }
  
  if(result == true) {
    printf("1");
  }
  else {
    printf("0");
  }
  
  return 0;
}
