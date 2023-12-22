#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t; cin >> t;
  
  cout << "Gnomes:" << endl;
  
  for(int i = 0; i < t; i++) {
    vector<int> vec(3);
    for(int j = 0; j < 3; j++) {
      cin >> vec[j];
    }
    if((vec[1] - vec[0]) * (vec[2] - vec[1]) > 0) {
      cout << "Ordered" << endl;
    }
    else {
      cout << "Unordered" << endl;
    }
  }
  
  return 0;
}
