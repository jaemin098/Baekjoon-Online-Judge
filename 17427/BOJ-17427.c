#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  long long res = 0;
  for(int i = 1; i <= n; i++) {
    res = res + (n / i) * i;
  }
  
  printf("%lld", res);
  
  return 0;
}
