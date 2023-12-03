#include <iostream>
#include <algorithm>

using namespace std;

int n = 0, p = 0;

int discnt(int n) {
  int price = 0;
  if(n >= 0 && n < 5) {
    return p;
  }
  else if(n >= 5 && n < 10) {
    price = p - 500;
    return price;
  }
  else if(n >= 10 && n < 15) {
    price = min(p - 500, p - p / 10);
    return price;
  }
  else if(n >= 15 && n < 20) {
    price = min(min(p - 500, p - p / 10), p - 2000);
    return price;
  }
  else if(n >= 20 && n <= 30) {
    int cmp = min(min(p - 500, p - p / 10), p - 2000);
    price = min(cmp, p - p / 4);
    return price;
  }
  
  return -1;
}

int main() {
  cin >> n >> p;
  
  int res = discnt(n);
  if(res <= 0) {
    cout << 0 << endl;
  }
  else {
    cout << res << endl;
  }
  
  return 0;
}
