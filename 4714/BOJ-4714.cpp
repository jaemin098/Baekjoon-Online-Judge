#include <iostream>

using namespace std;

int main() {
  const double multiplier = 0.167;
  cout << fixed;
  cout.precision(2);
  
  while(true) {
    double x; cin >> x;
    if(x < 0) {
      break;
    }
    
    double y = x * multiplier;
    cout << "Objects weighing " << x << " on Earth ";
    cout << "will weigh " << y << " on the moon." << endl;
  }
  
  return 0;
}
