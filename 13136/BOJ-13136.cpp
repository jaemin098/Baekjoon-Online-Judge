#include <iostream>

using namespace std;

int main() {
  long r, c, n;
  cin >> r >> c >> n;
  
  long a, b;
  if(r % n) {
    a = (r / n) + 1;
  }
  else {
    a = r / n;
  }
  
  if(c % n) {
    b = (c / n) + 1;
  }
  else {
    b = c / n;
  }
  
  cout << a * b;
  
  return 0;
}
