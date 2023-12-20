#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n; cin >> n;
  
  char arr[n];
  for(int i = 0; i < n; i++) {
    char tmp; cin >> tmp;
    arr[i] = tmp;
  }
  
  int x = 0, y = 0;
  for(int i = 0; i < n; i++) {
    char cmp = arr[i];
    if(cmp == 'D') {
      x += 1;
    }
    else if(cmp == 'P') {
      y += 1;
    }
    
    if(abs(x - y) == 2) {
      break;
    }
  }
  
  cout << x << ':' << y << endl;
  
  return 0;
}
