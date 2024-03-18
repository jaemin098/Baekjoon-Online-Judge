#include <iostream>
#include <string>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  string record; cin >> record;
  
  int pnt_a = 0, pnt_b = 0, len = record.length();
  for(int i = 0; i < len; i += 2) {
    if(record[i] == 'A') {
      pnt_a += record[i + 1] - '0';
    }
    else {
      pnt_b += record[i + 1] - '0';
    }
  }
  
  if(pnt_a > pnt_b) {
    cout << 'A' << endl;
  }
  else {
    cout << 'B' << endl;
  }
  
  return 0;
}
