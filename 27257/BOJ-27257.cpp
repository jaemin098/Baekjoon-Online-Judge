#include <iostream>
#include <string>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  string s; cin >> s;
  
  int ans = 0;
  for(size_t i = 0; i < s.length(); i++) {
    s[i] == '0' ? ans++ : ans;
  }
  
  for(size_t i = s.length() - 1; i != 0; i--) {
    if(s[i] == '0') {
      ans--;
    }
    else {
      break;
    }
  }
  
  cout << ans << '\n';
  
  return 0;
}
