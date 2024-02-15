#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  
  for(int i = 0; i < t; i++) {
    int len, width;
    cin >> len >> width;
    
    for(int j = 0; j < width; j++) {
      for(int k = 0; k < len; k++) {
        cout << 'X';
      }
      cout << '\n';
    }
    
    if(i < t - 1) {
      cout << '\n';
    }
  }
  
  return 0;
}
