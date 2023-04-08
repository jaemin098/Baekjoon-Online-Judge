#include <stdio.h>

int main() {
  int arr[1000001] = {0, };
  int n, i = 2;
  
  scanf("%d", &n);
  
  while(i <= n) {
    arr[i] = arr[i - 1] + 1;
    
    if(i % 2 == 0) {
      if(arr[i] > arr[i / 2] + 1) {
        arr[i] = arr[i / 2] + 1;
      }
    }
    
    if(i % 3 == 0) {
      if(arr[i] > arr[i / 3] + 1) {
        arr[i] = arr[i / 3] + 1;
      }
    }
    i++;
  }
  
  printf("%d", arr[n]);
  
  return 0;
}
