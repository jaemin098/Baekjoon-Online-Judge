#include <iostream>
#include <string>

using namespace std;

string scale(int grade) {
  if(grade >= 97 && grade <= 100) {
    return "A+";
  }
  else if(grade >= 90 && grade <= 96) {
    return "A";
  }
  else if(grade >= 87 && grade <= 89) {
    return "B+";
  }
  else if(grade >= 80 && grade <= 86) {
    return "B";
  }
  else if(grade >= 77 && grade <= 79) {
    return "C+";
  }
  else if(grade >= 70 && grade <= 76) {
    return "C";
  }
  else if(grade >= 67 && grade <= 69) {
    return "D+";
  }
  else if(grade >= 60 && grade <= 66) {
    return "D";
  }
  else {
    return "F";
  }
}

int main() {
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++) {
    int grade;
    string name;
    cin >> name >> grade;
    
    cout << name << ' ' << scale(grade) << '\n';
  }
  
  return 0;
}
