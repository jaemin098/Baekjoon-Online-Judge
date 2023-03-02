#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int t;
  
  cin >> t;
  
  for(int i = 0; i < t; i++) {
    cin >> str;
    cout << str.substr(0, 1) << str.substr(str.length() - 1) << "\n";
  }
  
  return 0;
}
