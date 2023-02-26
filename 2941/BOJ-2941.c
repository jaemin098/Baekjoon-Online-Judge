#include <stdio.h>
#include <string.h>

int main() {
  char arr[100];
  scanf("%s", arr);
  
  int sum;
  sum = strlen(arr);
  
  for(int j = 0; j < strlen(arr); j++) {
    if((arr[j] == 'l' || arr[j] == 'n') && arr[j + 1] == 'j') {
      sum--;
    }
    
    if(arr[j] == 'd' && arr[j + 1] == 'z' && arr[j + 2] == '=') {
      sum--;
    }
    
    if(arr[j] == '=' || arr[j] == '-') {
      sum--;
    }
    
  }
  printf("%d", sum);
  
  return 0;
}
