#include <iostream>

using namespace std;

int main() {
  int p, c;
  cin >> p >> c;
  
  int score = 0;
  for(int i = 0; i < p; i++) {
    score += 50;
  }
  for(int j = 0; j < c; j++) {
    score -= 10;
  }
  
  if(p > c) {
    score += 500;
  }
  
  cout << score << endl;
  
  return 0;
}
