#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int fivs = (n / 5);
  for(int i = 0; i < fivs; i++) {
    cout << 'V';
  }
  
  if(n % 5 != 0) {
    int ones = (n % 5);
    for(int i = 0; i < ones; i++) {
      cout << 'I';
    }
  }
  
  cout << endl;
  
  return 0;
}
