#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  int a[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  
  int chk[10] = {0, };
  for(int i = 0; i < n; i++) {
    int idx = a[i];
    chk[idx]++;
  }
  
  for(int i = 0; i < 10; i++) {
    if(1 <= chk[i]) {
      printf("%d\n", i);
    }
  }
  
  return 0;
}
