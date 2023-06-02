#include <stdio.h>

int main() {
  long long int n, m, max = 0;
  scanf("%lld %lld", &n, &m);
  
  max = (n * m) / 2;
  printf("%lld", max);
  
  return 0;
}
