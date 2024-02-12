#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a1, a2, a3; // the numbers stand for each floor
  cin >> a1 >> a2 >> a3;
  
  int f1 = (a2 * 2) + (a3 * 4);
  int f2 = (a1 * 2) + (a3 * 2);
  int f3 = (a1 * 4) + (a2 * 2);
  
  int min_time = min(min(f1, f2), f3);
  cout << min_time << '\n';
  
  return 0;
}
