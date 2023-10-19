#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cin >> str;
  
  int cnt_a = 0, cnt_b = 0;
  for(int i = 0; i < int(str.length()); i++) {
    if(str[i] == 'A') {
      cnt_a++;
    }
    else if(str[i] == 'B') {
      cnt_b++;
    }
  }
  
  cout << cnt_a << " : " << cnt_b << endl;
  
  return 0;
}
