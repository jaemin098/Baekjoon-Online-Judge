#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  for(int i = 0; i < t; i++) {
    string s;
    float n;
    cin >> n;
    
    getline(cin, s);
    for(int j = 0; j < (int)s.length(); j++) {
      if(s[j] == '@') {
        n = n * 3;
      }
      else if(s[j] == '%') {
        n = n + 5;
      }
      else if(s[j] == '#') {
        n = n - 7;
      }
    }
    cout << fixed;
    cout.precision(2);
    cout << n << "\n";
  }
  
  return 0;
}
