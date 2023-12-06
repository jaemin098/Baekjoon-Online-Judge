#include <iostream>

using namespace std;

int main() {
  int n, w, h, l;
  cin >> n >> w >> h >> l;
  
  int room = (w / l) * (h / l);
  if(n < room) {
    cout << n << endl;
  }
  else {
    cout << room << endl;
  }
  
  return 0;
}
