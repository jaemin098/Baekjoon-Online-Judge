#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  string s;
  cin >> s;
  
  int cnt_2 = 0;
  int cnt_e = 0;
  
  for(int i = 0; i < n; i++) {
    if(s[i] == '2') {
      cnt_2 += 1;
    }
    else if(s[i] == 'e') {
      cnt_e += 1;
    }
  }
  
  if(cnt_2 == cnt_e) {
    cout << "yee";
  }
  else if(cnt_2 > cnt_e) {
    cout << "2";
  }
  else {
    cout << "e";
  }
  
  return 0;
}
