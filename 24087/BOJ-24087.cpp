#include <iostream>

using namespace std;

int main() {
  int s, a, b;
  cin >> s >> a >> b;
  
  int cost = 0, height = 0;
  if(s <= a) {
    cost += 250;
  }
  else {
    cost += 250; height += a;
    
    while(true) {
      cost += 100; height += b;
      
      if(s <= height) {
        break;
      }
    }
  }
  
  cout << cost << '\n';
  
  return 0;
}
