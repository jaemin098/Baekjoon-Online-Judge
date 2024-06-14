#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  int n; cin >> n;
  
  vector<string> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  int m; cin >> m;
  for(int i = 0; i < m; i++) {
    int l, r; cin >> l >> r;
    
    for(int j = l - 1; j < r; j++) {
      cout << v[j] << '\n';
    }
  }
  
  return 0;
}
