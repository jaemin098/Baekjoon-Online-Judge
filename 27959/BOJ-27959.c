#include <stdio.h>

int main() {
  int n = 0, m = 0;
  int coins = 0;
  
  scanf("%d %d", &n, &m);
  
  for(int i = 0; i < n; i++) {
    coins = coins + 100;
  }
  
  if(coins >= m && m != 0) {
    printf("Yes");
  }
  else {
    printf("No");
  }
  
  return 0;
}
