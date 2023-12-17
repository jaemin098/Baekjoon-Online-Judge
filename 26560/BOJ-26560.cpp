#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n; cin.ignore();
  for(int i = 0; i < n; i++) {
    string str;
    getline(cin, str);
    
    char ch = str.back();
    if(ch == '.') {
      cout << str << endl;
    }
    else {
      cout << str << '.' << endl;
    }
  }
  
  return 0;
}
