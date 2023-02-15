#include <stdio.h>

int main() {
  int a = 0, arr[9], index;
  
  for(int i = 0; i < 9; i++) {
    scanf("%d", &arr[i]);
    
    if(arr[i] > a) {
      a = arr[i];
      index = i;
    }
  }
  
  printf("%d\n%d", a, index + 1);
  
  return 0;
}
