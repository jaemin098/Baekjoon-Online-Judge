#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int b1, b2, b3, d1, d2;
  cin >> b1 >> b2 >> b3;
  cin >> d1 >> d2;
  
  int b_min = min(b1, b2);
  b_min = min(b_min, b3);
  
  int d_min = min(d1, d2);
  
  int min_set = (b_min + d_min) - 50;
  
  cout << min_set << endl;
  
  return 0;
}
