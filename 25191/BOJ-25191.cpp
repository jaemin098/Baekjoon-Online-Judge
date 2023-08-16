#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  
  cout << min(n, (a / 2) + b);
  
  return 0;
}
