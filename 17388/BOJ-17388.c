#include <stdio.h>

int main() {
  int arr[3], sum = 0;
  
  for(int i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  
  if(sum >= 100) {
    printf("OK");
  }
  else {
    if(arr[0] < arr[1] && arr[0] < arr[2]) {
      printf("Soongsil");
    }
    else if(arr[1] < arr[0] && arr[1] < arr[2]) {
      printf("Korea");
    }
    else {
      printf("Hanyang");
    }
  }
  
  return 0;
}
