#include <stdio.h>

int main() {
  int arr[100][100] = {0, };
  
  int n;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int j = a - 1; j < a - 1 + 10; j++) {
      for(int k = b - 1; k < b - 1 + 10; k++) {
        arr[j][k] = 1;
      }
    }
  }
  
  int cnt = 0;
  
  for(int q = 0; q < 100; q++) {
    for(int r = 0; r < 100; r++) {
      if(arr[q][r] == 1) {
        cnt++;
      }
    }
  }
  
  printf("%d", cnt);
  
  return 0;
}
