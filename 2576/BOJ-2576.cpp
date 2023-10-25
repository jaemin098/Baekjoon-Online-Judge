#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
  vector<int> v;
  
  int num;
  while(cin >> num) {
    if(num % 2 != 0) {
      v.push_back(num);
    }
  }
  
  if(v.empty()) {
    cout << "-1" << endl;
  }
  else {
    sort(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);
    int min_odd = v[0];
    cout << sum << '\n' << min_odd << endl;
  }
  
  return 0;
}
