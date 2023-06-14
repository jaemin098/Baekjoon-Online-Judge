#include <stdio.h>

int main() {
  int Ur, Tr, Uo, To;
  scanf("%d %d %d %d", &Ur, &Tr, &Uo, &To);
  
  int th = (Ur * 56) + (Tr * 24) + (Uo * 14) + (To * 6);
  
  printf("%d", th);
  
  return 0;
}
