#include <iostream>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  
  int p_num[n] = {0, };
  int solved_pbs = 0;
  for(int i = 0; i < n; i++) {
    cin >> p_num[i];
    
    solved_pbs += p_num[i];
  }
  
  int cash_div = (d / solved_pbs);
  
  for(int i = 0; i < n; i++) {
    int per_mem = cash_div * p_num[i];
    
    cout << per_mem << endl;
  }
  
  return 0;
}
