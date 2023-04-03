#include <iostream>

using namespace std;

int main() {
  int arr[101] = {0, };
  int n, m;
  int i, j, k;
  
  cin >> n >> m;
  
  while(m--) {
    cin >> i >> j >> k;
    
    for(int o = i; o <= j; o++) {
      arr[o] = k;
    }
  }
  
  for(int q = 1; q <= n; q++) {
    cout << arr[q] << " ";
  }
  
  return 0;
}
