#include <iostream>
#include <algorithm>

using namespace std;

int search(string str) {
  char word[5] = {'M', 'O', 'B', 'I', 'S'};
  
  for(int i = 0; i < 5; i++) {
    if(find(str.begin(), str.end(), word[i]) == str.end()) {
      return 0;
    }
  }
  
  return 1;
}

int main() {
  string str;
  cin >> str;
  
  int res = search(str);
  
  if(res == 1) {
    cout << "YES" << endl;
  }
  else if(res == 0) {
    cout << "NO" << endl;
  }
  
  return 0;
}
