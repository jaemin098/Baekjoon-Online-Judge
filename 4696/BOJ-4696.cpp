#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double n;
  while(true) {
    cin >> n;
    
    if(n == 0) {
      break;
    }
    
    cout << fixed; cout.precision(2);
    
    cout << 1 + pow(n, 1) + pow(n, 2) + pow(n, 3) + pow(n, 4);
    cout << endl;
  }
  
  return 0;
}
