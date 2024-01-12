#include <iostream>
#include <string>

using namespace std;

int main() {
  int n; string s;
  cin >> n >> s;
  
  if(s.at(n - 1) == 'G') {
    s.pop_back();
    cout << s << endl;
  }
  else {
    s.append("G");
    cout << s << endl;
  }
  
  return 0;
}
