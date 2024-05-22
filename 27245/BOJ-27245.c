#include <stdio.h>

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int main(void) {
  int w, l, h;
  scanf("%d%d%d", &w, &l, &h);
  
  int minlen = min(w, l), maxlen = max(w, l);
  
  if(2 <= minlen / h && maxlen / minlen <= 2) {
    printf("good\n");
  }
  else {
    printf("bad\n");
  }
  
  return 0;
}
