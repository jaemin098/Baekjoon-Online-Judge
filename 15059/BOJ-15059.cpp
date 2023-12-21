#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int Ca, Ba, Pa;
  int Cr, Br, Pr;
  cin >> Ca >> Ba >> Pa;
  cin >> Cr >> Br >> Pr;
  
  int res = max(0, Cr - Ca) + max(0, Br - Ba) + max(0, Pr - Pa);
  cout << res << endl;
  
  return 0;
}
