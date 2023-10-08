#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  double sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += pow(i, 3);
  }
  
  cout << sum << endl;
  
  return 0;
}
