#include <iostream>

using namespace std;

const double PI = 3.1415926535897932384;

int main() {
  double a1, p1, r1, p2;
  cin >> a1 >> p1 >> r1 >> p2;
  
  double whole_piz_val = (r1 * r1 * PI) / p2;
  double slice_piz_val = a1 / p1;
  
  if(whole_piz_val > slice_piz_val) {
    cout << "Whole pizza" << endl;
  }
  else {
    cout << "Slice of pizza" << endl;
  }
  
  return 0;
}
