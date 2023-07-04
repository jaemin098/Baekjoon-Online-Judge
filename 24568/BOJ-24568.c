#include <stdio.h>

int cupcakes(int rbox, int sbox) {
  int total = (rbox * 8) + (sbox * 3);
  
  int ans = total - 28;
  
  if(ans < 0) {
    ans = 0;
  }
  
  return ans;
}

int main() {
  int rbox, sbox;
  scanf("%d\n%d", &rbox, &sbox);
  
  printf("%d", cupcakes(rbox, sbox));
  
  return 0;
}
