#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  
  double m = (b - a) / 400;
  double prob = 1 / (1 + pow(10, m));
  
  cout << fixed;
  cout.precision(20);
  
  cout << prob << endl;
  
  return 0;
}
