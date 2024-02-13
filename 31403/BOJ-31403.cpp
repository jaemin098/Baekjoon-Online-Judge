#include <iostream>
#include <string>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  string s1 = to_string(a), s2 = to_string(b);
  int str_i = stoi(s1 += s2);
  int calc_int = (a + b) - c, calc_str = str_i - c;
  
  cout << calc_int << '\n';
  cout << calc_str << '\n';
  
  return 0;
}
