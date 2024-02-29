#include <iostream>

using namespace std;

const double gallon = 3.785411784;
const double mile = 1.609344;

int main() {
  double x; cin >> x;
  
  double res = 100.0 / ((mile / gallon) * x);
  
  cout << fixed; cout.precision(6);
  cout << res << endl;
  
  return 0;
}
