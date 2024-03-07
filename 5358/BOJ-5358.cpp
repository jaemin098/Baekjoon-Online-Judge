#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  while(getline(cin, s)) {
    for(int j = 0; j < (int)s.length(); j++) {
      if(s[j] == 'i') {
        s[j] = 'e';
      }
      else if(s[j] == 'e') {
        s[j] = 'i';
      }
      else if(s[j] == 'I') {
        s[j] = 'E';
      }
      else if(s[j] == 'E') {
        s[j] = 'I';
      }
    }
    
    cout << s << '\n';
    s.clear();
  }
  
  return 0;
}
