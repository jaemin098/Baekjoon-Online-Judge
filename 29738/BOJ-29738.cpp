#include <iostream>
#include <string>

using namespace std;

int main() {
  int t; cin >> t;
  
  for(int i = 0; i < t; i++) {
    string str = "Round 1";
    int n; cin >> n;
    
    if(n <= 25) {
      str = "World Finals";
    }
    else if(n <= 1000) {
      str = "Round 3";
    }
    else if(n <= 4500) {
      str = "Round 2";
    }
    
    cout << "Case " << '#' << i + 1 << ": ";
    cout << str << '\n';
  }
  
  return 0;
}
