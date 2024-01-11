#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415926535897932384;

int main() {
  double a; cin >> a;
  
  double res = sqrt(a / PI) * 2 * PI;
  
  cout.precision(12);
  cout << res << endl;
  
  return 0;
}
