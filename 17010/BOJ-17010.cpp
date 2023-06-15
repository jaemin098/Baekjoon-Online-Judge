#include <iostream>

using namespace std;

int main() {
  int l;
  int n; char c;
  
  cin >> l;
  
  while(l--) {
    cin >> n >> c;
    
    while(n--) {
      cout << c;
    }
    
    cout << "\n";
  }
  
  return 0;
}
