#include <iostream>

using namespace std;

int main() {
  while(true) {
    int n;
    cin >> n;
    
    if(n == 0) {
      break;
    }
    
    int blocks = n * (n + 1) / 2;
    cout << blocks << endl;
  }
  
  return 0;
}
