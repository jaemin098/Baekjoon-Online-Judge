#include <iostream>

using namespace std;

int main() {
  int t1, v1;
  cin >> t1 >> v1;
  
  int t2, v2;
  cin >> t2 >> v2;
  
  if(t2 < 0 && v2 >= 10) {
    cout << "A storm warning for tomorrow! ";
    cout << "Be careful and stay home if possible!" << '\n';
  }
  else if(t2 < t1) {
    cout << "MCHS warns! Low temperature is expected tomorrow." << '\n';
  }
  else if(v1 < v2) {
    cout << "MCHS warns! Strong wind is expected tomorrow." << '\n';
  }
  else {
    cout << "No message" << '\n';
  }
  
  return 0;
}
