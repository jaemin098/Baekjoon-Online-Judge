#include <stdio.h>

int main() {
  int k, w, m;
  scanf("%d %d %d", &k, &w, &m);
  
  int sum = 0, num = 0;
  sum = sum + k;
  while(w > sum) {
    sum += m;
    num++;
  }
  
  printf("%d\n", num);
  
  return 0;
}
