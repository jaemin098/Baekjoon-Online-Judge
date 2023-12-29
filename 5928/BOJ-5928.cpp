#include <iostream>

using namespace std;

int main() {
  int d, h, m;
  cin >> d >> h >> m;
  
  int t1 = 11 * 60 * 24 + 11 * 60 + 11;
  int t2 = d * 60 * 24 + h * 60 + m;
  
  int res = t2 - t1;
  if(res < 0) {
    cout << -1 << endl;
  }
  else {
    cout << res << endl;
  }
  
  return 0;
}
