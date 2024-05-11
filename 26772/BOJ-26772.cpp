#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  const string str[9] = {
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     "
  };
  
  int n; cin >> n;
  
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < n; j++) {
      cout << str[i];
      
      if(j != n - 1) {
        cout << ' ';
      }
    }
    
    cout << '\n';
  }
  
  return 0;
}
