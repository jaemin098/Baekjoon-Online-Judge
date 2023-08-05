#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int l, a, b, c, d;
  cin >> l >> a >> b >> c >> d;
  
  int hw = 0;
  if(a % c == 0) {
    hw = (a / c);
  }
  else {
    hw = (a / c) + 1;
  }
  
  if(b % d == 0) {
    hw = max(hw, (b / d));
  }
  else {
    hw = max(hw, (b / d) + 1);
  }
  
  cout << l - hw;
  
  return 0;
}
