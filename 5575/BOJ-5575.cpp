#include <iostream>

using namespace std;

int main() {
  int n = 3;
  while(n--) {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    
    int rh, rm, rs;
    if(s2 < s1) {
      rs = (s2 + 60) - s1;
      m2 -= 1;
    }
    else {
      rs = (s2 - s1);
    }
    
    if(m2 < m1) {
      rm = (m2 + 60) - m1;
      h2 -= 1;
    }
    else {
      rm = (m2 - m1);
    }
    
    rh = (h2 - h1);
    
    cout << rh << ' ' << rm << ' ' << rs << endl;
  }
  
  return 0;
}
