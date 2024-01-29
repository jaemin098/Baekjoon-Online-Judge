#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  long n, x; cin >> n >> x;
  
  long arr[n];
  for(long i = 0; i < n; i++) {
    long price; cin >> price;
    arr[i] = price * x;
  }
  
  vector<long> v;
  for(long i = 0; i < n - 1; i++) {
    v.push_back(arr[i] + arr[i + 1]);
  }
  
  sort(v.begin(), v.end());
  
  cout << v[0] << '\n';
  
  return 0;
}
