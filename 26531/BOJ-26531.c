#include <stdio.h>

int main() {
  int a, b, c;
  char op1, op2;
  scanf("%d %c %d %c %d", &a, &op1, &b, &op2, &c);
  
  if((a + b) == c) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }
  
  return 0;
}
