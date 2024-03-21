#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int t; cin >> t;
  
  vector<int> v(t);
  for(int i = 0; i < (int)v.size(); i++) {
    cin >> v[i];
  }
  
  int res = 0;
  if(v[0] > v[2]) {
    res += (v[0] - v[2]) * 508;
  }
  else {
    res += (v[2] - v[0]) * 108;
  }
  
  if(v[1] > v[3]) {
    res += (v[1] - v[3]) * 212;
  }
  else {
    res += (v[3] - v[1]) * 305;
  }
  
  if(v[4] > 0) {
    res += v[4] * 707;
  }
  
  cout << res * 4763 << endl;
  
  return 0;
}
