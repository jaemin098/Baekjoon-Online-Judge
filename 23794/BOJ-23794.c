#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  for(int i = 0; i < n + 2; i++) {
    printf("@");
  }
  printf("\n");
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n + 2; j++) {
      if(j == 0 || j == n + 1) {
        printf("@");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
  
  for(int i = 0; i < n + 2; i++) {
    printf("@");
  }
  
  return 0;
}
