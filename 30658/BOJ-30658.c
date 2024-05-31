#include <stdio.h>

int solve(void) {
  int n; scanf("%d", &n);
  
  if(n == 0) {
    return 0;
  }
  
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  for(int i = n - 1; i >= 0; i--) {
    printf("%d\n", arr[i]);
  }
  
  printf("0\n");
  
  return 1;
}

int main(void) {
  while(solve());
  
  return 0;
}
