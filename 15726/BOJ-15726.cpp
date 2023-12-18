#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  
  double x = (a * b) / c;
  double y = (a / b) * c;
  
  int res = max(x, y);
  cout << res << endl;
  
  return 0;
}
