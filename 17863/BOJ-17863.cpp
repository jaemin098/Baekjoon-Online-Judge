#include <iostream>
#include <string>

using namespace std;

int main() {
  string n;
  cin >> n;
  
  if(n.substr(0, 3) == "555") {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  
  return 0;
}
