#include <stdio.h>
#define MAX_SIZE 15

int main() {
  char str_read[5][MAX_SIZE];
  
  for(int i = 0; i < 5; i++) {
    scanf("%s", str_read[i]);
  }
  
  for(int j = 0; j < MAX_SIZE; j++) {
    for(int k = 0; k < 5; k++) {
      if(str_read[k][j] == NULL) {
        continue;
      }
      else {
        printf("%c", str[k][j]);
      }
      
    }
  }
  
  printf("\n");
  
  return 0;
}
