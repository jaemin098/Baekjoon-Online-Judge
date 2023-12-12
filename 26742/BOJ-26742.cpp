#include <iostream>

using namespace std;

int main() {
  string str;
  cin >> str;
  
  int cntB = 0, cntC = 0;
  for(int i = 0; i < (int)str.length(); i++) {
    if(str[i] == 'B') {
      cntB++;
    }
    else if(str[i] == 'C') {
      cntC++;
    }
  }
  
  int setB = cntB / 2;
  int setC = cntC / 2;
  
  cout << setB + setC << endl;
  
  return 0;
}
