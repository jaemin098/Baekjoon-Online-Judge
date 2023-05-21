#include <stdio.h>

int main() {
  int antennas, eyes;
  scanf("%d", &antennas);
  scanf("%d", &eyes);
  
  if(antennas >= 3 && eyes <= 4) {
    printf("TroyMartian\n");
  }
  if(antennas <= 6 && eyes >= 2) {
    printf("VladSaturnian\n");
  }
  if(antennas <= 2 && eyes <= 3) {
    printf("GraemeMercurian\n");
  }
  
  return 0;
}
