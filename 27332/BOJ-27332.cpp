#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int day = a + (b * 7);
  
  if(day >= 1 && day <= 30) {
    cout << 1 << endl;
  }
  else {
    cout << 0 << endl;
  }
  
  return 0;
}
