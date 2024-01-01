#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    string str; cin >> str;
    int yes = 0, no = 0;
    
    for(int j = 0; j < (int)str.length(); j++) {
      if(str[j] == 'O') {
        yes += 1;
      }
      else if(str[j] == 'X') {
        no += 1;
      }
    }
    
    if(yes > no) {
      cnt += 1;
    }
    
    str.clear();
  }
  
  cout << cnt << '\n';
  
  return 0;
}
