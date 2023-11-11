#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int sum = a + b;
  int sub = a - b;
  
  if(sum < 0 || sub < 0) {
    cout << "-1" << endl;
  }
  else {
    if((sum % 2 == 0) && (sub % 2 == 0)) {
      cout << (sum / 2) << " ";
      cout << (sub / 2) << endl;
    }
    else {
      cout << "-1" << endl;
    }
  }
  
  return 0;
}
