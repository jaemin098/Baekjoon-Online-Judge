#include <iostream>
#include <string>

using namespace std;

int n = 0;

void input(void) {
  cin >> n;
}

double solve(void) {
  double sum = 0;
  int x = 0; cin >> x;
  
  for(int i = 0; i < x; i++) {
    string name; int quant; double price;
    cin >> name >> quant >> price;
    
    sum += quant * price;
  }
  
  return sum;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cout << fixed; cout.precision(2);
  
  input();
  
  for(int i = 0; i < n; i++) {
    double res = solve();
    cout << '$' << res << '\n';
  }
  
  return 0;
}
