#include <iostream>

using namespace std;

int main() {
  int direction = 0;
  for(int i = 0; i < 10; i++) {
    int t; cin >> t;
    if(t == 1) {
      direction = direction + 1;
    }
    else if(t == 2) {
      direction = direction + 2;
    }
    else if(t == 3) {
      direction = direction + 3;
    }
  }
  
  direction = direction % 4;
  if(direction == 0) {
    cout << 'N' << endl;
  }
  else if(direction == 1) {
    cout << 'E' << endl;
  }
  else if(direction == 2) {
    cout << 'S' << endl;
  }
  else if(direction == 3) {
    cout << 'W' << endl;
  }
  
  return 0;
}
