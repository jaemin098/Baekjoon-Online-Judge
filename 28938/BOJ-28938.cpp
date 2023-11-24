#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    int ipt;
    cin >> ipt;
    
    sum += ipt;
  }
  
  if(sum > 0) {
    cout << "Right" << endl;
  }
  else if(sum < 0) {
    cout << "Left" << endl;
  }
  else if(sum == 0) {
    cout << "Stay" << endl;
  }
  
  return 0;
}
