#include <iostream>
#include <vector>

using namespace std;

int main() {
  int case_n = 0;
  while(true) {
    int n; cin >> n;
    if(n == 0) {
      break;
    }
    
    case_n += 1;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
      cin >> vec[i];
    }
    
    double median = 0;
    if(n % 2 == 0) {
      median = (vec[(n / 2) - 1] + vec[n / 2]) / 2.0;
    }
    else {
      median = vec[(n - 1) / 2];
    }
    
    cout << fixed; cout.precision(1);
    cout << "Case " << case_n << ": ";
    cout << median << '\n';
  }
  
  return 0;
}
