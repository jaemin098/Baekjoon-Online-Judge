#include <iostream>

using namespace std;

int main() {
  int arr[4];
  for(int i = 0; i < 4; i++) {
    cin >> arr[i];
  }
  
  if(arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3]) {
    cout << "Fish Diving" << endl;
  }
  else if(arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3]) {
    cout << "Fish Rising" << endl;
  }
  else if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]) {
    cout << "Fish At Constant Depth" << endl;
  }
  else {
    cout << "No Fish" << endl;
  }
  
  return 0;
}
