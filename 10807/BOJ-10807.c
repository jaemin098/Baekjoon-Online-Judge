#include <stdio.h>

int main() {
  int n, arr[100] = {0};
  
  int v, cnt = 0;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  scanf("%d", &v);
  
  for(int j = 0; j < n; j++) {
    if(arr[j] == v) {
      cnt++;
    }
  }
  
  printf("%d", cnt);
  
  return 0;
}
