#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

const double pi = M_PI;

int main() {
  double a; cin >> a;
  
  double rad = sqrt(a / pi);
  double circum = 2 * pi * rad;
  
  cout << fixed;
  cout.precision(9);
  
  cout << circum << endl;
  
  return 0;
}
