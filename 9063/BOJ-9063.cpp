#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n;
  cin >> n;
  
  int *x = new int[n];
  int *y = new int[n];
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  
  sort(x, x + n);
  sort(y, y + n);
  
  cout << (x[n - 1] - x[0]) * (y[n - 1] - y[0]);
  
  return 0;
}
