#include <iostream>

using namespace std;

int main() {
  while(true) {
    string str; getline(cin, str);
    if(cin.eof()) {
      break;
    }
    
    cout << str << endl;
  }
  
  return 0;
}
