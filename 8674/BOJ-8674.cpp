#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  long long arr[2];
  cin >> arr[0] >> arr[1];
  
  if((arr[0] == 1) && (arr[1] == 1)) {
    cout << 0 << endl;
  }
  else if((arr[0] % 2 == 0) || (arr[1] % 2 == 0)) {
    cout << 0 << endl;
  }
  else {
    cout << min(arr[0], arr[1]) << endl;
  }
  
  return 0;
}
