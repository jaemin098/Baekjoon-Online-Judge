#include <stdio.h>

long long m = 0, k = 0;

void input() {
  scanf("%lld %lld", &m, &k);
}

int check(long long m, long long k) {
  if(m % k == 0) {
    return 1;
  }
  
  return 0;
}

int main() {
  input();
  int flag = check(m, k);
  
  if(flag == 1) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  
  return 0;
}
