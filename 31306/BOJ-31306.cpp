#include <iostream>
#include <string>

using namespace std;

int main() {
  string str; cin >> str;
  
  string vow_1 = "aeiou";
  int cnt_1 = 0;
  for(int i = 0; i < (int)vow_1.length(); i++) {
    for(int j = 0; j < (int)str.length(); j++) {
      if(vow_1[i] == str[j]) {
        cnt_1 += 1;
      }
    }
  }
  
  string vow_2 = "aeiouy";
  int cnt_2 = 0;
  for(int i = 0; i < (int)vow_2.length(); i++) {
    for(int j = 0; j < (int)str.length(); j++) {
      if(vow_2[i] == str[j]) {
        cnt_2 += 1;
      }
    }
  }
  
  cout << cnt_1 << ' ' << cnt_2 << '\n';
  
  return 0;
}
