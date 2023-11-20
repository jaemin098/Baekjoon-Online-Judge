#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    string str;
    cin >> str;
    
    int x = stoi(str.substr(2));
    if(x <= 90) {
      cnt++;
    }
  }
  
  cout << cnt << endl;
  
  return 0;
}
