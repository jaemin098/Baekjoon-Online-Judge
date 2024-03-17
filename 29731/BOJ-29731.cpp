#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> str_set;

void init_vec(void) {
  str_set.push_back("Never gonna give you up");
  str_set.push_back("Never gonna let you down");
  str_set.push_back("Never gonna run around and desert you");
  str_set.push_back("Never gonna make you cry");
  str_set.push_back("Never gonna say goodbye");
  str_set.push_back("Never gonna tell a lie and hurt you");
  str_set.push_back("Never gonna stop");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  init_vec();
  
  int n; cin >> n;
  cin.ignore();
  
  bool flag = true;
  for(int i = 0; i < n; i++) {
    string s; getline(cin, s);
    
    if(flag == true) {
      auto it = find(str_set.begin(), str_set.end(), s);
      if(it == str_set.end()) {
        flag = false;
      }
    }
    else {
      continue;
    }
  }
  
  if(flag == false) {
    cout << "Yes" << '\n';
  }
  else {
    cout << "No" << '\n';
  }
  
  return 0;
}
