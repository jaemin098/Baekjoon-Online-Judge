#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  int cnt_e = 0;
  for(int i = 0; i < (int)s.length(); i++) {
    if(s[i] == 'e') {
      cnt_e += 1;
    }
  }
  
  string e;
  for(int i = 0; i < (2 * cnt_e); i++) {
    e.push_back('e');
  }
  
  string res = "hy";
  res.insert(1, e);
  
  cout << res << endl;
  
  return 0;
}
