#include <iostream>

using namespace std;

int main() {
  int a, x; cin >> a >> x; // monthly fee of "plan a"; first 30 mins are free
  int b, y; cin >> b >> y; // monthly fee of "plan b"; first 45 mins are free
  int t; cin >> t; // total time spent on a bicycle during each day
  
  int total_a = 0, total_b = 0;
  total_a += a, total_b += b;
  
  if(t > 30) {
    if(t <= 45) {
      for(int i = 0; i < 21; i++) {
        total_a += (t - 30) * x;
      }
    }
    else {
      for(int i = 0; i < 21; i++) {
        total_a += (t - 30) * x;
        total_b += (t - 45) * y;
      }
    }
  }
  
  cout << total_a << ' ' << total_b << '\n';
  
  return 0;
}
