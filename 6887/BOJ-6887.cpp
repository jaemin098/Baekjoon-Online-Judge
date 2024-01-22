#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n; cin >> n;
  
  int side_length = sqrt(n);
  cout << "The largest square has side length ";
  cout << side_length << '.' << endl;
  
  return 0;
}
