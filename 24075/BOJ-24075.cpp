#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int add = a + b;
  int sub = a - b;
  
  cout << max(add, sub) << endl;
  cout << min(add, sub) << endl;
  
  return 0;
}
