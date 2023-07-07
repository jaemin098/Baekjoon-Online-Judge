#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  string st1, st2;
  cin >> st1 >> st2;
  
  if(st1.length() >= st2.length()) {
    cout << "go" << "\n";
  }
  else {
    cout << "no" << "\n";
  }
  
  return 0;
}
