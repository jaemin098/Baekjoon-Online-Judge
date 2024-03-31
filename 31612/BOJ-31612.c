#include <stdio.h>

int main(void) {
  const int j_st = 2, o_st = 1, i_st = 2;
  
  int n; scanf("%d", &n);
  char s[n + 1]; scanf("%s", s);
  
  int sum_st = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'j') {
      sum_st += j_st;
    }
    else if(s[i] == 'o') {
      sum_st += o_st;
    }
    else if(s[i] == 'i') {
      sum_st += i_st;
    }
  }
  
  printf("%d\n", sum_st);
  
  return 0;
}
