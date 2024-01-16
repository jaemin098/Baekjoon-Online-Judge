#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  
  int n; cin >> n;
  
  vector<int> vec(n);
  for(int i = 0; i < (int)vec.size(); i++) {
    cin >> vec[i];
  }
  reverse(vec.begin(), vec.end());
  
  deque<int> dq;
  for(int i = 0; i < (int)vec.size(); i++) {
    if(vec[i] == 1) {
      dq.push_front(i + 1);
    }
    else if(vec[i] == 2) {
      dq.insert(dq.begin() + 1, i + 1);
    }
    else if(vec[i] == 3) {
      dq.push_back(i + 1);
    }
  }
  
  for(int i = 0; i < (int)dq.size(); i++) {
    cout << dq[i] << ' ';
  }
  
  return 0;
}
