#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int highScore = 0;
  while(n--) {
    int a, d, g;
    cin >> a >> d >> g;
    
    int score = 0;
    if(a == (d + g)) {
      score = a * (d + g) * 2;
    }
    else {
      score = a * (d + g);
    }
    
    highScore = max(highScore, score);
  }
  
  cout << highScore << endl;
  
  return 0;
}
