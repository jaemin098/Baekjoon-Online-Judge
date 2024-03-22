#include <iostream>

using namespace std;

int input_a(void) {
  int x; cin >> x;
  
  return x;
}

int input_t(void) {
  int y; cin >> y;
  
  return y;
}

int solve(int x, int y) {
  const int b = 3;
  int sum = (x + y) + b;
  
  return sum;
}

int main(void) {
  int x = input_a();
  int y = input_t();
  int res = solve(x, y);
  
  cout << res << '\n';
  
  return 0;
}
