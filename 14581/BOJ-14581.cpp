#include <iostream>

using namespace std;

int main() {
  string id;
  cin >> id;
  
  string fan = ":fan:";
  
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(i == 1 && j == 1) {
        cout << ":" << id << ":";
      }
      else {
        cout << fan;
      }
    }
    cout << endl;
  }
  
  return 0;
}
