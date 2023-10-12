#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int n, m, k;
  cin >> n >> m >> k;
  
  int num = 0, row = 0, column = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(num == k) {
        row = i;
        column = j;
      }
      num++;
    }
  }
  
  cout << row << ' ' << column << "\n";
  
  return 0;
}
