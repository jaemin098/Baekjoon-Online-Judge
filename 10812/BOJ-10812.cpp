#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n, m;
  int arr[101];
  
  cin >> n >> m;
  
  for(int i = 1; i <= n; i++) {
    arr[i] = i;
  }
  
  while(m--) {
    int begin, end, mid;
    cin >> begin >> end >> mid;
    
    rotate(arr + begin, arr + mid, arr + end + 1);
  }
  
  for(int j = 1; j <= n; j++) {
    cout << arr[j] << " ";
  }
  
  return 0;
}
