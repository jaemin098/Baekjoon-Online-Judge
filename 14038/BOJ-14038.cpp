#include <iostream>

using namespace std;

int main() {
  int wins = 0;
  
  for(int i = 0; i < 6; i++) {
    char input;
    cin >> input;
    
    if(input == 'W') {
      wins++;
    }
  }
  
  switch(wins) {
    case 6:
    case 5:
      cout << "1";
      break;
    case 4:
    case 3:
      cout << "2";
      break;
    case 2:
    case 1:
      cout << "3";
      break;
    default:
      cout << "-1";
  }
  
  return 0;
}
