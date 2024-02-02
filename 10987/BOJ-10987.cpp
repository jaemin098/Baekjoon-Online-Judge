#include <iostream>
#include <string>

using namespace std;

int main() {
  string cmp = "aeiou";
  string s; cin >> s;
  
  int cnt = 0;
  for(int i = 0; i < (int)s.length(); i++) {
    for(int j = 0; j < 5; j++) {
      if(cmp[j] == s[i]) {
        cnt += 1;
      }
    }
  }
  
  cout << cnt << endl;
  
  return 0;
}
