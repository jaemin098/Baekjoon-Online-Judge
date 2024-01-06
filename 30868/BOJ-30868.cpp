#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  
  for(int i = 0; i < t; i++) {
    int n; cin >> n;
    int divval = n / 5, rest = n % 5;
    for(int j = 0; j < divval; j++) {
      cout << "++++ ";
    }
    for(int k = 0; k < rest; k++) {
      cout << '|';
    }
    
    cout << '\n';
  }
  
  return 0;
}
