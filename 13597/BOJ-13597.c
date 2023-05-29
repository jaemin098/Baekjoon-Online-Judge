#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, res;
  cin >> a >> b;
  
  if(a == b) {
    res = a;
    cout << res;
  }
  else {
    res = max(a, b);
    cout << res;
  }
  
  return 0;
}
