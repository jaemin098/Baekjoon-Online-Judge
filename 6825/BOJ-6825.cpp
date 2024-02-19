#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double w, h;
  cin >> w >> h;
  
  double bmi = w / pow(h, 2);
  
  if(bmi < 18.5) {
    cout << "Underweight" << endl;
  }
  else if(bmi >= 18.5 && bmi < 25) {
    cout << "Normal weight" << endl;
  }
  else if(bmi >= 25) {
    cout << "Overweight" << endl;
  }
  
  return 0;
}
