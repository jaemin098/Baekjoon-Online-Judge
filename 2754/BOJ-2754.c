#include <stdio.h>

int main() {
  char grade[3] = {"", };
  scanf("%s", grade);
  
  double score = 0.0;
  
  if(grade[0] == 'A') {
    score += 4;
  }
  else if(grade[0] == 'B') {
    score += 3;
  }
  else if(grade[0] == 'C') {
    score += 2;
  }
  else if(grade[0] == 'D') {
    score += 1;
  }
  else {
    score += 0;
  }
  
  if(grade[1] == '+') {
    score += 0.3;
  }
  else if(grade[1] == '-') {
    score -= 0.3;
  }
  
  printf("%.1lf", score);
  
  return 0;
}
