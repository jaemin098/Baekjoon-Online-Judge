#include <iostream>

using namespace std;

int main(void) {
  int n; cin >> n;
  
  cout << fixed; cout.precision(1);
  
  for(int i = 0; i < n; i++) {
    double a, b;
    cin >> a >> b;
    
    cout << abs(a - b) << '\n';
  }
  
  return 0;
}
