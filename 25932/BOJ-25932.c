#include <stdio.h>

int main(void) {
  int n; scanf("%d", &n);
  
  while(n--) {
    int nums[10];
    for(int i = 0; i < 10; i++) {
      scanf("%d", &nums[i]);
    }
    
    int iszack = 0, ismack = 0;
    for(int j = 0; j < 10; j++) {
      printf("%d ", nums[j]);
      
      (nums[j] == 17) ? iszack = 1 : (nums[j] == 18 ? ismack = 1 : 0);
    }
    printf("\n");
    
    if(iszack && ismack) {
      printf("both\n\n");
    }
    else if(iszack) {
      printf("zack\n\n");
    }
    else if(ismack) {
      printf("mack\n\n");
    }
    else {
      printf("none\n\n");
    }
  }
  
  return 0;
}
