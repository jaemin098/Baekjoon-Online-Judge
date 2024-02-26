#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, string> hash_s;
  
  hash_s.insert({"CU", "see you"});
  hash_s.insert({":-)", "I’m happy"});
  hash_s.insert({":-(", "I’m unhappy"});
  hash_s.insert({";-)", "wink"});
  hash_s.insert({":-P", "stick out my tongue"});
  hash_s.insert({"(~.~)", "sleepy"});
  hash_s.insert({"TA", "totally awesome"});
  hash_s.insert({"CCC", "Canadian Computing Competition"});
  hash_s.insert({"CUZ", "because"});
  hash_s.insert({"TY", "thank-you"});
  hash_s.insert({"YW", "you’re welcome"});
  hash_s.insert({"TTYL", "talk to you later"});
  
  while(true) {
    string s; cin >> s;
    
    if(hash_s.find(s) != hash_s.end()) {
      cout << hash_s[s] << '\n';
    }
    else {
      cout << s << '\n';
    }
    
    if(s == "TTYL") {
      break;
    }
  }
  
  return 0;
}
