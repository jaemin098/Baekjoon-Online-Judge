#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  int d[k];
  for(int i = 0; i < k; i++) {
    int g; cin >> g;
    int p = (g * 100) / n;
    
    if(0 <= p && p <= 4) {
      d[i] = 1;
    }
    else if(4 < p && p <= 11) {
      d[i] = 2;
    }
    else if(11 < p && p <= 23) {
      d[i] = 3;
    }
    else if(23 < p && p <= 40) {
      d[i] = 4;
    }
    else if(40 < p && p <= 60) {
      d[i] = 5;
    }
    else if(60 < p && p <= 77) {
      d[i] = 6;
    }
    else if(77 < p && p <= 89) {
      d[i] = 7;
    }
    else if(89 < p && p <= 96) {
      d[i] = 8;
    }
    else if(96 < p && p <= 100) {
      d[i] = 9;
    }
  }
  
  for(int i = 0; i < k; i++) {
    cout << d[i] << ' ';
  }
  
  cout << '\n';
  
  return 0;
}
