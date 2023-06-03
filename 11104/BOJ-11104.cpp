#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    int deci; string bin;
    cin >> bin;
    
    deci = stoi(bin, nullptr, 2);
    
    cout << deci << "\n";
  }
  
  return 0;
}
