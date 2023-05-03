#include <iostream>

int main() {
  int n, l;
  cin >> n >> l;
  
  int x = - 1, itr = 0;
  for(int i = l; i <= 100; i++) {
    int tmp = ((i - 1) * i) / 2;
    
    if((n - tmp) % i == 0 && (n - tmp) / i >= 0) {
      x = (n - tmp) / i;
      itr = i;
      break;
    }
  }
  
  if(x == - 1) {
    cout << "-1";
  }
  else {
    for(int i = 0; i < itr; i++) {
      cout << x + i << " ";
    }
  }
  
  return 0;
}
