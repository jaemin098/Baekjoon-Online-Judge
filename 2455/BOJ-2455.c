#include <stdio.h>

int main() {
  int max = 0, car = 0;
  for(int i = 0; i < 4; i++) {
    int drop, ride;
    scanf("%d %d", &drop, &ride);
    
    car = car + ride - drop;
    
    if(max < car) {
      max = car;
    }
  }
  
  printf("%d\n", max);
  
  return 0;
}
