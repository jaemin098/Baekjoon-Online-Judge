#include <iostream>

using namespace std;

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  
  double sc_a, sc_c, sc_e;
  cin >> sc_a >> sc_c >> sc_e;
  
  if((x <= sc_a) && (y <= sc_c) && (z <= sc_e)) {
    cout << 'A' << endl;
  }
  else if((x / 2 <= sc_a) && (y <= sc_c) && (z <= sc_e)) {
    cout << 'B' << endl;
  }
  else if((y <= sc_c) && (z <= sc_e)) {
    cout << 'C' << endl;
  }
  else if((y / 2 <= sc_c) && (z <= sc_e)) {
    cout << 'D' << endl;
  }
  else {
    cout << 'E' << endl;
  }
  
  return 0;
}
