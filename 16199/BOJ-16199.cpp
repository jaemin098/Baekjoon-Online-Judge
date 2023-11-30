#include <iostream>

using namespace std;

int main() {
  int y1, m1, d1, y2, m2, d2;
  cin >> y1 >> m1 >> d1;
  cin >> y2 >> m2 >> d2;
  
  int yr1 = 0;
  if(m1 < m2) {
    yr1 = y2 - y1;
  }
  else if(m1 == m2 && d1 <= d2) {
    yr1 = y2 - y1;
  }
  else {
    yr1 = y2 - y1 - 1;
  }
  
  int yr2 = y2 - y1 + 1;
  int yr3 = y2 - y1;
  
  cout << yr1 << "\n" << yr2 << "\n" << yr3 << endl;
  
  return 0;
}
