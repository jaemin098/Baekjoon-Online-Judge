#include <iostream>

using namespace std;

int main() {
  int arr[8] = {0, };
  for(int i = 0; i < 8; i++) {
    cin >> arr[i];
  }
  
  int flg = 0;
  for(int i = 0; i < 8; i++) {
    if(arr[i] == 9) {
      flg = 1;
    }
  }
  
  if(flg == 0) {
    cout << 'S' << endl;
  }
  else if(flg == 1) {
    cout << 'F' << endl;
  }
  
  return 0;
}
