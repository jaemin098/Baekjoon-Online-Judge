#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s; getline(cin, s);
  
  cout << s[0];
  for(size_t i = 1; i < s.length(); i++) {
    if(s[i] == s[i - 1]) {
      continue;
    }
    cout << s[i];
  }
  
  return 0;
}
