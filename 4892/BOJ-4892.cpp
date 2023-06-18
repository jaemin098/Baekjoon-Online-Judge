#include <iostream>

using namespace std;

int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int tc = 0;
  int n0, n1, n2, n3, n4;
  
  while(1) {
    cin >> n0;
    
    tc++;
    
    if(n0 == 0) {
      break;
    }
    
    n1 = (3 * n0);
    if(n1 % 2 == 0) {
      n2 = (n1 / 2);
    }
    else {
      n2 = (n1 + 1) / 2;
    }
    
    n3 = (3 * n2);
    n4 = (n3 / 9);
    
    if(n1 % 2 == 0) {
      cout << tc << ". " << "even" << " " << n4 << "\n";
    }
    else {
      cout << tc << ". " << "odd" << " " << n4 << "\n";
    }
  }
  
  return 0;
}
