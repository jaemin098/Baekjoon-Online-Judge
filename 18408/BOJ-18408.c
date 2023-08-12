#include <stdio.h>

int main() {
  int cnt1 = 0;
  int cnt2 = 0;
  
  for(int i = 0; i < 3; i++) {
    int ipt;
    scanf("%d", &ipt);
    
    if(ipt == 1) {
      cnt1 = cnt1 + 1;
    }
    else if(ipt == 2) {
      cnt2 = cnt2 + 1;
    }
  }
  
  if(cnt1 > cnt2) {
    printf("1");
  }
  else if(cnt2 > cnt1) {
    printf("2");
  }
  
  return 0;
}
