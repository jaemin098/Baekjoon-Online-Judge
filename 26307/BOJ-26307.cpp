#include <iostream>

using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  
  if(h == 9 && m == 0) {
    cout << '0' << endl;
  }
  else {
    int consmdT = (h - 9) * 60 + m;
    
    cout << consmdT << endl;
  }
  
  return 0;
}
