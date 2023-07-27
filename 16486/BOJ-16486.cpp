#include <iostream>

using namespace std;

int main() {
  int d1, d2;
  cin >> d1 >> d2;
  
  double pi = 3.141592;
  double perimeter = (d1 * 2) + ((d2 * pi) * 2);
  
  cout << fixed;
  cout.precision(6);
  cout << perimeter;
  
  return 0;
}
