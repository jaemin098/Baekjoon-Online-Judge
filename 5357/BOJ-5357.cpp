#include <iostream>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  
  for(int i = 0; i < n; i++) {
    string str, res;
    cin >> str;
    
    for(int j = 0; j < (int)str.length(); j++) {
      if(str[j] != str[j + 1]) {
        res += str[j];
      }
    }
    
    cout << res << '\n';
  }
  
  return 0;
}
