#include <iostream>

using namespace std;

int main(void) {
  int k; cin >> k;
  
  for(int i = 0; i < k; i++) {
    int n, s, d; cin >> n >> s >> d;
    
    int ducats = 0;
    for(int j = 0; j < n; j++) {
      int d_i, v_i; cin >> d_i >> v_i;
      
      if(s * d >= d_i) {
        ducats += v_i;
      }
    }
    
    cout << "Data Set " << i + 1 << ": " << '\n';
    cout << ducats << '\n' << endl;
  }
  
  return 0;
}
