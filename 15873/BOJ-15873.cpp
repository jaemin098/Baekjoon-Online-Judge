#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  int a = 0;
  if(s.length() >= 3 && s[1] == '0') {
    a = stoi(s.substr(0, 2));
  }
  else {
    a = stoi(s.substr(0, 1));
  }
  
  int b = 0;
  if(a == 10) {
    b = stoi(s.substr(2));
  }
  else {
    b = stoi(s.substr(1));
  }
  
  int res = (a + b);
  cout << res << endl;
  
  return 0;
}
