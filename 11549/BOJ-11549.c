#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  
  int corr_ans = 0;
  
  for(int i = 0; i < 5; i++) {
    int part_ans;
    scanf("%d", &part_ans);
    
    if(t == part_ans) {
      corr_ans++;
    }
  }
  
  printf("%d", corr_ans);
  
  return 0;
}
