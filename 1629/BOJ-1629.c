#include <stdio.h>

int foo(int a, int b, int c) {
  if(b == 0) {
    return 1;
  }
  else if(b > 1) {
    long long k = foo(a, b / 2, c);
    if(b % 2) {
      return ((k * k) % c * a) % c;
    }
    else {
      return (k * k) % c;
    }
  }
  else {
    return a;
  }
}

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  printf("%d", foo(a % c, b, c));
  
  return 0;
}
