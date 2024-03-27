#include <iostream>

using namespace std;

int main(void) {
  int n; cin >> n;
  
  char arr[n + 1];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  char c; cin >> c;
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(c == arr[i]) {
      cnt += 1;
    }
  }
  
  cout << cnt << '\n';
  
  return 0;
}
