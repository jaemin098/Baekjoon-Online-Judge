#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int res = 1001;
  while(n--) {
    int a, b;
    cin >> a >> b;
    if(b >= a) {
      res = min(res, b);
    }
  }
  
  if(res == 1001) {
    cout << -1 << endl;
  }
  else {
    cout << res << endl;
  }
  
  return 0;
}
