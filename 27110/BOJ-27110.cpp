#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int sum = 0;
  
  for(int i = 0; i < 3; i++) {
    int m;
    cin >> m;
    
    if(n > m) {
      sum += m;
    }
    else {
      sum += n;
    }
  }
  
  cout << sum << endl;
  
  return 0;
}
