#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a;
  cin >> a;
  
  double side = sqrt(a);
  double res = side * 4;
  
  cout << fixed;
  cout.precision(8);
  cout << res << endl;
  
  return 0;
}
