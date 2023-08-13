#include <iostream>

using namespace std;

int main() {
  int n;
  string str1;
  cin >> str1 >> n;
  
  int cnt = 0;
  while(n--) {
    string str2;
    cin >> str2;
    
    if(str1 == str2) {
      cnt++;
    }
  }
  
  cout << cnt;
  
  return 0;
}
