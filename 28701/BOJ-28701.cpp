#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long n;
  cin >> n;
  
  cout << n * (n + 1) / 2 << endl;
  
  long l = pow(n * (n + 1) / 2, 2);
  cout << l << endl;
  
  long m = 0;
  for(int i = 1; i <= n; i++) {
    m += pow(i, 3);
  }
  
  cout << m;
  
  return 0;
}
