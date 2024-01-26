#include <iostream>

using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  
  int x_to_min = x * 60;
  int y_to_min = y * 60;
  int z_to_min = z * 60 + 30;
  
  int abc = x_to_min + y_to_min;
  
  if(z_to_min > abc) {
    cout << 1 << endl;
  }
  else {
    cout << 0 << endl;
  }
  
  return 0;
}
