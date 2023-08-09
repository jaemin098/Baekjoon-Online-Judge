#include <iostream>

using namespace std;

int main() {
  string ans;
  getline(cin, ans);
  
  if((ans[0] - '0') + (ans[4] - '0') == (ans[8] - '0')) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  
  return 0;
}
