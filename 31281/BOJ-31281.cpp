#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  long long a, b, c;
  cin >> a >> b >> c;
  
  long long res = a + b + c - min({a, b, c}) - max({a, b, c});
  cout << res << '\n';
  
  return 0;
}
