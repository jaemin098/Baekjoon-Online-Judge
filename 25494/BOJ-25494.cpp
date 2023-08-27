#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  int a, b, c;
  while(t--) {
    cin >> a >> b >> c;
    cout << min(a, min(b, c)) << endl;
  }
  
  return 0;
}
