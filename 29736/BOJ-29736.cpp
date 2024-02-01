#include <iostream>

using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int k, x; cin >> k >> x;
  
  int cnt = 0;
  for(int i = a; i <= b; i++) {
    if((i == k - x) || (i == k) || (i == k + x)) {
      cnt += 1;
    }
    else if((i > k - x) && (i < k)) {
      cnt += 1;
    }
    else if((i > k) && (i < k + x)) {
      cnt += 1;
    }
    else if(i > k + x) {
      break;
    }
  }
  
  if(cnt == 0) {
    cout << "IMPOSSIBLE" << '\n';
  }
  else {
    cout << cnt << '\n';
  }
  
  return 0;
}
