#include <iostream>

using namespace std;

int main() {
  int scr[2] = {0, 0};
  
  for(int i = 0; i < 2; i++) {
    int t, f, s, p, c;
    cin >> t >> f >> s >> p >> c;
    
    scr[i] = (t * 6) + (f * 3) + (s * 2) + p + (c * 2);
  }
  
  for(int i = 0; i < 2; i++) {
    cout << scr[i] << ' ';
  }
  
  return 0;
}
