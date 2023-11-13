#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    string s;
    int idx1, idx2;
    cin >> s >> idx1 >> idx2;
    
    s.erase((s.begin() + idx1), (s.begin() + idx2));
    cout << s << endl;
  }
  
  return 0;
}
