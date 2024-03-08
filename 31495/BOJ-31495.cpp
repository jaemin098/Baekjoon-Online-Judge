#include <iostream>
#include <string>

using namespace std;

int main() {
  string s; getline(cin, s);
  
  if((s.front() == '"') && (s.back() == '"')) {
    if(s == "\"\"" || s == "\"") {
      cout << "CE" << endl;
    }
    else {
      s.erase(0, 1), s.erase(s.length() - 1, 1);
      cout << s << endl;
    }
  }
  else {
    cout << "CE" << endl;
  }
  
  return 0;
}
