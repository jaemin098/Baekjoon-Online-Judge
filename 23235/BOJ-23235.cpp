#include <iostream>

using namespace std;

int main() {
  int num = 1;
  string s;
  
  while(true) {
    getline(cin, s);
    
    if(s == "0") {
      break;
    }
    
    cout << "Case " << num << ": ";
    cout << "Sorting... done!" << endl;
    
    num += 1;
  }
  
  return 0;
}
