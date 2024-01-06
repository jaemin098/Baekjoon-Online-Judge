#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  
  int t; cin >> t;
  
  for(int i = 0; i < t; i++) {
    string s; cin >> s;
    
    string tmp = s.substr(2);
    int n1 = stoi(s) + 1, den = stoi(tmp);
    
    if(n1 % den == 0) {
      cout << "Good" << '\n';
    }
    else {
      cout << "Bye" << '\n';
    }
  }
  
  return 0;
}
