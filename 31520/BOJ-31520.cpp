#include <iostream>
#include <string>

using namespace std;

int sol(void) {
  string n; cin >> n;
  
  for(int i = 0; i < (int)n.length(); i++) {
    if(n[i] - '0' != i + 1) {
      return -1;
    }
  }
  
  return n.length();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  cout << sol() << '\n';
  
  return 0;
}
