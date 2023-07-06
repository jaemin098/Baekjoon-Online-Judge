#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  double def_rate = a * (100 - b) / 100;
  
  if(def_rate < 100) {
    cout << 1 << endl;
  }
  else {
    cout << 0 << endl;
  }
  
  return 0;
}
