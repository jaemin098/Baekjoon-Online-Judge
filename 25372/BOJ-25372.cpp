#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    string s;
    cin >> s;
    
    if(6 <= s.length() && s.length() <= 9) {
      cout << "yes" << endl;
    }
    else {
      cout << "no" << endl;
    }
  }
  
  return 0;
}
