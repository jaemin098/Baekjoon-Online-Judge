#include <stdio.h>

int main(void) {
  int n, a; scanf("%d%d", &n, &a);
  
  int arr[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += arr[i] / a;
  }
  
  printf("%d\n", ans);
  
  return 0;
}
