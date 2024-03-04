#include <iostream>
#include <string>

using namespace std;

int main() {
  string str; cin >> str;
  
  if(str == "fdsajkl;" || str == "jkl;fdsa") {
    cout << "in-out" << endl;
  }
  else if(str == "asdf;lkj" || str == ";lkjasdf") {
    cout << "out-in" << endl;
  }
  else if(str == "asdfjkl;") {
    cout << "stairs" << endl;
  }
  else if(str == ";lkjfdsa") {
    cout << "reverse" << endl;
  }
  else {
    cout << "molu" << endl;
  }
  
  return 0;
}
