#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  string s;
  cin >> s;
  
  int i = 0;
  cin >> i;
  
  cout << s[i - 1];
  
  return 0;
}
