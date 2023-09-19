#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    int p, t;
    cin >> p >> t;
    
    int bp = t / 4;
    int dp = t / 7;
    
    int tpop = p + bp - dp;
    cout << tpop << endl;
    
    tpop = 0;
  }
  
  return 0;
}
