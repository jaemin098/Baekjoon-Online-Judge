#include <stdio.h>

int main() {
  int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  int x, y;
  scanf("%d %d", &x, &y);
  
  int sum = 0;
  for(int i = 0; i < x - 1; i++) {
    sum = sum + arr[i];
  }
  
  sum = sum + y;
  
  switch(sum % 7) {
    case 0:
      printf("SUN");
      break;
    case 1:
      printf("MON");
      break;
    case 2:
      printf("TUE");
      break;
    case 3:
      printf("WED");
      break;
    case 4:
      printf("THU");
      break;
    case 5:
      printf("FRI");
      break;
    case 6:
      printf("SAT");
      break;
  }
  
  return 0;
}
