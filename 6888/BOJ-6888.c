#include <stdio.h>

int main() {
  int x, y;
  scanf("%d\n%d", &x, &y);
  
  for(int i = x; i <= y; i += 60) {
    printf("All positions change in year ");
    printf("%d\n", i);
  }
  
  return 0;
}
