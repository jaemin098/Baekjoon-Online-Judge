#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double w, h;
  cin >> w >> h;
  
  double rect_cut = w + h;
  double diag_cut = sqrt((w * w) + (h * h));
  
  cout << fixed;
  cout.precision(9);
  
  double res = rect_cut - diag_cut;
  cout << res << endl;
  
  return 0;
}
