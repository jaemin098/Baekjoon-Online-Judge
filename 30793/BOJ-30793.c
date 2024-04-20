#include <stdio.h>

int main(void) {
  float px, rx;
  scanf("%f%f", &px, &rx);
  
  float vx = px / rx;
  if(vx < 0.2) {
    puts("weak");
  }
  else if(vx < 0.4) {
    puts("normal");
  }
  else if(vx < 0.6) {
    puts("strong");
  }
  else {
    puts("very strong");
  }
  
  return 0;
}
