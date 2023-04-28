#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if(b == 0) {
    return a;
  }
  else {
    return gcd(b, a % b);
  }
}

int main() {
  int a1, b1, a2, b2;
  cin >> a1 >> b1 >> a2 >> b2;
  
  int n = (a1 * b2) + (a2 * b1);
  int m = b1 * b2;
  
  cout << n / gcd(n, m) << " " << m / gcd(n, m);
  
  return 0;
}
