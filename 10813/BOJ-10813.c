#include <stdio.h>

int main() {
  int arr[101] = {0, };
  int n, m;
  
  scanf("%d %d", &n, &m);
  
  for(int h = 0; h < n; h++) {
    arr[h] = h + 1;
  }
  
  while(m--) {
    int i, j, tmp;
    scanf("%d %d", &i, &j);
    
    tmp = arr[i - 1];
    arr[i - 1] = arr[j - 1];
    arr[j - 1] = tmp;
  }
  
  for(int q = 0; q < n; q++) {
    printf("%d", arr[q]);
    printf(" ");
  }
  
  return 0;
}
