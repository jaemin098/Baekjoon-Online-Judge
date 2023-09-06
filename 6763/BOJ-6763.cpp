#include <iostream>

using namespace std;

int main() {
  int spdlim, recspd;
  cin >> spdlim >> recspd;
  
  int diff = (recspd - spdlim);
  
  if(0 >= diff) {
    cout << "Congratulations, you are within the speed limit!";
  }
  else {
    if(1 < diff && 20 >= diff) {
      cout << "You are speeding and your fine is $100.";
    }
    else if(21 < diff && 30 >= diff) {
      cout << "You are speeding and your fine is $270.";
    }
    else {
      cout << "You are speeding and your fine is $500.";
    }
  }
  
  return 0;
}
