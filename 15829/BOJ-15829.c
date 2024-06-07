#include <stdio.h>

#define M 1234567891

int main(void) {
  int l; char a[51];
  scanf("%d%s", &l, a);
  
  long long hash = 0, r = 1;
  for(int i = 0; i < l; i++) {
    hash += ((a[i] - 'a' + 1) * r) % M;
    r = (r * 31) % M;
  }
  
  printf("%lld\n", hash % M);
  
  return 0;
}
