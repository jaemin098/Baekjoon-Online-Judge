#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  
  for(int i = 0; i < n; i++) {
    int num, s, m, t;
    cin >> num >> s >> m >> t;
    
    int tscore = s + m + t;
    cout << num << ' ' << tscore << ' ';
    
    if(tscore >= 55 && s >= 11 && m >= 8 && t >= 12) {
      cout << "PASS" << '\n';
    }
    else {
      cout << "FAIL" << '\n';
    }
  }
  
  return 0;
}
