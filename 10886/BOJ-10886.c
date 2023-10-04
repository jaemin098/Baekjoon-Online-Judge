#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  int cnt0 = 0, cnt1 = 0;
  while(n--) {
    int tmp;
    scanf("%d", &tmp);
    
    if(tmp == 0) {
      cnt0++;
    }
    else if(tmp == 1) {
      cnt1++;
    }
  }
  
  if(cnt1 > cnt0) {
    printf("Junhee is cute!\n");
  }
  else {
    printf("Junhee is not cute!\n");
  }
  
  return 0;
}
