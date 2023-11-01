#include <iostream>
#include <string>

using namespace std;

int main() {
  int fg1(0), fg2(0), fg3(0);
  
  string str;
  for(int i = 0; i < 15; i++) {
    getline(cin, str);
    
    if(str.find('w') != string::npos) {
      fg1 = 1;
    }
    else if(str.find('b') != string::npos) {
      fg2 = 1;
    }
    else if(str.find('g') != string::npos) {
      fg3 = 1;
    }
  }
  
  if(fg1 == 1) {
    cout << "chunbae" << endl;
  }
  else if(fg2 == 1) {
    cout << "nabi" << endl;
  }
  else if(fg3 == 1) {
    cout << "yeongcheol" << endl;
  }
  
  return 0;
}
