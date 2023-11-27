#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  int flg = 0;
  for(int i = 0; i < (int)s.size(); i++) {
    if(s[i] == '7') {
      flg = 1;
    }
  }
  
  int div = stoi(s) % 7;
  if(flg == 0) {
    if(div == 0) {
      cout << '1' << endl;
    }
    else {
      cout << '0' << endl;
    }
  }
  else if(flg == 1) {
    if(div == 0) {
      cout << '3' << endl;
    }
    else {
      cout << '2' << endl;
    }
  }
  
  return 0;
}
