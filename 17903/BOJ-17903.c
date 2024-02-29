#include <stdio.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  
  int arr[21][21];
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  
  if(m >= 8) {
    printf("satisfactory\n");
  }
  else {
    printf("unsatisfactory\n");
  }
  
  return 0;
}
