#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    int a, b, x;
    cin >> a >> b >> x;
    
    int w = a * (x - 1) + b;
    
    cout << w << endl;
  }
  
  return 0;
}
