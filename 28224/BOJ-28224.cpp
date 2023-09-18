#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int price = 0;
  while(n--) {
    int ipt;
    cin >> ipt;
    
    price += ipt;
  }
  
  cout << price << endl;
  
  return 0;
}
