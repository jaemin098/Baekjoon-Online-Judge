#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  
  for(int i = 0; i < t; i++) {
    string s; cin >> s;
    int cnt = 0;
    for(int j = 0; j < (int)s.length(); j++) {
      if(s[j] == 'U') {
        cnt += 1;
      }
      else if(s[j] == 'D') {
        break;
      }
    }
    
    cout << cnt << '\n';
  }
  
  return 0;
}
