#include <iostream>

#define FASTIO ios_base::sync_with_stdio(false); \
  cin.tie(0); cout.tie(0);

using namespace std;

int factorial(int n) {
  int res = 1;
  
  if(n <= 1) {
    return res;
  }
  else {
    for(int i = 1; i <= n; i++) {
      res = res * i;
    }
  }
  
  return res;
}

int main(void) {
  FASTIO;
  
  int n; cin >> n;
  
  int ans = factorial(n) % 10;
  cout << ans << '\n';
  
  return 0;
}
