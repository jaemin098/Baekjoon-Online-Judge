#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  vector<string> v;
  for(int i = 0; i < n; i++) {
    string str; str.clear();
    cin >> str;
    v.push_back(str);
  }
  
  for(int i = 0; i < n; i++) {
    reverse(v[i].begin(), v[i].end());
    cout << v[i] << endl;
  }
  
  return 0;
}
