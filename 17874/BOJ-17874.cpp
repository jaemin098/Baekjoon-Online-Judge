#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, h, v;
  cin >> n >> h >> v;
  
  int vol = max(h, (n - h)) * max(v, (n - v)) * 4;
  
  cout << vol << endl;
  
  return 0;
}
