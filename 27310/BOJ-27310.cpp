#include <iostream>
#include <string>

using namespace std;

int main() {
  string str; cin >> str;
  
  int len = str.length();
  int col = 0, uds = 0;
  for(int i = 0; i < (int)str.length(); i++) {
    if(str[i] == ':') {
      col += 1;
    }
    
    if(str[i] == '_') {
      uds += 1;
    }
  }
  
  int res = len + col + (5 * uds);
  cout << res << endl;
  
  return 0;
}
