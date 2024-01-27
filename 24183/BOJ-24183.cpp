#include <iostream>

using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  
  double c4 = a * 0.229 * 0.324;
  double a3 = b * 0.297 * 0.420;
  double a4 = c * 0.210 * 0.297;
  
  double env = c4 * 2, pos = a3 * 2;
  
  cout << fixed;
  cout.precision(6);
  
  cout << env + pos + a4 << endl;
  
  return 0;
}
