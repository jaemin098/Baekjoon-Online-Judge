#include <stdio.h>

int main() {
  long long a, b;
  scanf("%lld %lld", &a, &b);
  
  if(a >= b) {
    printf("%lld\n", b);
  }
  else {
    printf("%lld\n", a + 1);
  }
  
  return 0;
}
