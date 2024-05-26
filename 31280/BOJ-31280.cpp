#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  int draw = a + b + c + d - min({a, b, c, d}) + 1;
  cout << draw << '\n';
  
  return 0;
}
