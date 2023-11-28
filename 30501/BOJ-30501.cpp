#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  string ans;
  while(n--) {
    string s;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++) {
      if(s[i] == 'S') {
        ans = s;
        break;
      }
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
