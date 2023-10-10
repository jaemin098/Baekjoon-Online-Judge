#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int levs[n] = {0, };
  for(int i = 0; i < n; i++) {
    cin >> levs[i];
  }
  
  int stage[n] = {0, };
  for(int i = 0; i < n; i++) {
    if(levs[i] == 300) {
      stage[i] = 1;
    }
    else if(levs[i] < 300 && levs[i] >= 275) {
      stage[i] = 2;
    }
    else if(levs[i] < 275 && levs[i] >= 250) {
      stage[i] = 3;
    }
    else if(levs[i] < 250) {
      stage[i] = 4;
    }
  }
  
  for(int i = 0; i < n; i++) {
    cout << stage[i] << " ";
  }
  
  return 0;
}
