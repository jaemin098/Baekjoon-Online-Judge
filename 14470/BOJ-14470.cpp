#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c;
  cin >> d >> e;
  
  int time = 0;
  if(a < 0) {
    time = abs(a) * c + d + (b * e);
  }
  else {
    time = (b - a) * e;
  }
  
  cout << time << endl;
  
  return 0;
}
