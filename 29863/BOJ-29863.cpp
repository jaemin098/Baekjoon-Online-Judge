#include <iostream>

using namespace std;

int main() {
  int st, wt;
  cin >> st >> wt;
  
  if(st > 12) {
    st = 24 - st;
    cout << st + wt << endl;
  }
  else if(st == 0) {
    cout << st + wt << endl;
  }
  else {
    cout << wt - st << endl;
  }
  
  return 0;
}
