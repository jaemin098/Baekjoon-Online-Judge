#include <iostream>
#include <string>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  long long n; string k;
  cin >> n >> k;
  
  long long odd = 0, even = 0;
  for(size_t i = 0; i < k.length(); i++) {
    char c = k[i];
    int num = c - '0';
    num % 2 == 0 ? even++ : odd++;
  }
  
  if(odd < even) {
    cout << 0 << '\n';
  }
  else if(even < odd) {
    cout << 1 << '\n';
  }
  else {
    cout << -1 << '\n';
  }
  
  return 0;
}
