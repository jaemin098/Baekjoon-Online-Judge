#include <stdio.h>

int main() {
  int arr[10] = {0, };
  
  for(int i = 0; i < 5; i++) {
    int idx;
    scanf("%d", &idx);
    
    arr[idx] = arr[idx] + 1;
  }
  
  for(int i = 0; i < 10; i++) {
    if(arr[i] % 2) {
      printf("%d", i);
    }
  }
  
  return 0;
}
