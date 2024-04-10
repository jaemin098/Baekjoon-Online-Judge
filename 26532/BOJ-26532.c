#include <stdio.h>

int main(void) {
  int len1, len2;
  scanf("%d%d", &len1, &len2);
  
  int area_yds = len1 * len2;
  int area_acre = area_yds / 4840;
  int bags_num = (area_acre / 5) + 1;
  
  printf("%d\n", bags_num);
  
  return 0;
}
