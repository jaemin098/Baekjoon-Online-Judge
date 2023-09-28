#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int cnt = 0;
  while(n--) {
    string s; s.clear();
    cin >> s;
    
    if(s.find("01") != string::npos) {
      cnt++;
    }
    else if(s.find("OI") != string::npos) {
      cnt++;
    }
  }
  
  cout << cnt << endl;
  
  return 0;
}
