#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  
  int set1 = 0, sum1 = 0;
  while(true) {
    if(set1 >= n) {
      break;
    }
    set1 += a;
    sum1 += b;
  }
  
  int set2 = 0, sum2 = 0;
  while(true) {
    if(set2 >= n) {
      break;
    }
    set2 += c;
    sum2 += d;
  }
  
  cout << min(sum1, sum2) << endl;
  
  return 0;
}
