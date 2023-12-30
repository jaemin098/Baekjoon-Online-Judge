#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  int mv = max({a, b, c});
  
  int res = (mv - a) + (mv - b) + (mv - c);
  cout << res << endl;
  
  return 0;
}
