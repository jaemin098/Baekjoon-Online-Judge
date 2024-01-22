#include <iostream>

using namespace std;

int main() {
  double k; cin >> k;
  
  double commission = (k * 0.01) + 25.0;
  
  cout << fixed;
  cout.precision(2);
  
  if(commission < 100.0) {
    commission = 100.0;
    cout << commission << endl;
  }
  else if(commission > 2000.0) {
    commission = 2000.0;
    cout << commission << endl;
  }
  else {
    cout << commission << endl;
  }
  
  return 0;
}
