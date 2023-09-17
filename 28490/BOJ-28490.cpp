#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int largest = 0;
  for(int i = 0; i < n; i++) {
    int h, w;
    cin >> h >> w;
    
    int size = h * w;
    if(size > largest) {
      largest = size;
    }
  }
  
  cout << largest << endl;
  
  return 0;
}
