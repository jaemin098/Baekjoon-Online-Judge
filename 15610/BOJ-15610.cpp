#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a;
  cin >> a;
  
  double length = 4 * sqrt(a);
  
  cout << fixed;
  cout.precision(8);
  
  cout << length << endl;
  
  return 0;
}
