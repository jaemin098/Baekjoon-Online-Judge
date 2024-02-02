#include <stdio.h>

int main() {
  int n; scanf("%d", &n);
  
  int a[n];
  for(int i = 0; i < n; i++) {
    int pages; scanf("%d", &pages);
    a[i] = pages;
  }
  
  int b[n];
  for(int i = 0; i < n; i++) {
    int pages; scanf("%d", &pages);
    b[i] = pages;
  }
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] <= b[i]) {
      cnt += 1;
    }
  }
  
  printf("%d\n", cnt);
  
  return 0;
}
