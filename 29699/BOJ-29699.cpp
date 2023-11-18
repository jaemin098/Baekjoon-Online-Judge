#include <iostream>

using namespace std;

int main() {
  string str = "WelcomeToSMUPC";
  
  int n;
  cin >> n;
  n = n - 1;
  
  cout << str[n % 14] << endl;
  
  return 0;
}
