#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int l, r; // number of tines on the "left" and "right"
  cin >> l >> r;
  
  int x = 0; // points of the moose
  if((l == 0) && (r == 0)) {
    cout << "Not a moose" << endl;
  }
  else if((l == r) && ((l + r) % 2 == 0)) {
    x = l + r;
    cout << "Even " << x << endl;
  }
  else {
    x = max(l, r) * 2;
    cout << "Odd " << x << endl;
  }
  
  return 0;
}
