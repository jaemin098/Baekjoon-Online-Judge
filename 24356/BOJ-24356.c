#include <stdio.h>

int main() {
  int t1, m1; scanf("%d %d", &t1, &m1);
  int t2, m2; scanf(" %d %d", &t2, &m2);
  
  m1 += 60 * t1, m2 += 60 * t2;
  if(m1 > m2) {
    m2 += 60 * 24;
  }
  
  int m = (m2 - m1), n = (m / 30);
  printf("%d %d\n", m, n);
  
  return 0;
}
