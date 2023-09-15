#include <iostream>

using namespace std;

int main() {
  int h, i, a, r, c;
  cin >> h >> i >> a >> r >> c;
  
  int term1 = h * i;
  int term2 = a * r * c;
  
  cout << term1 - term2 << endl;
  
  return 0;
}
