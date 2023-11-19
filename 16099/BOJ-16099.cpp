#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  
  for(int i = 0; i < tc; i++) {
    long lt, wt, le, we;
    cin >> lt >> wt >> le >> we;
    
    if(lt * wt > le * we) {
      cout << "TelecomParisTech" << endl;
    }
    else if(lt * wt < le * we) {
      cout << "Eurecom" << endl;
    }
    else {
      cout << "Tie" << endl;
    }
  }
  
  return 0;
}
