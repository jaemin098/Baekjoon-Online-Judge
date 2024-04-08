#include <stdio.h>

int main(void) {
  int fstu, addu, n;
  scanf("%d%d%d", &fstu, &addu, &n);
  
  while(n--) {
    int cons; scanf("%d", &cons);
    int rmdr = cons - 1000, bill;
    if(rmdr < 0) {
      bill = (1000 + rmdr) * fstu;
    }
    else if(rmdr > 0) {
      bill = rmdr * addu + 1000 * fstu;
    }
    else {
      bill = 1000 * fstu;
    }
    
    printf("%d %d\n", cons, bill);
  }
  
  return 0;
}
