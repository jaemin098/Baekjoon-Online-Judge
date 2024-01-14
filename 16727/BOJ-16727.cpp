#include <iostream>

using namespace std;

int main() {
  int p1, s1; // number of goals scored by Persepolis and Esteghlal
  cin >> p1 >> s1;
  int s2, p2; // number of goals scored by Esteghlal and Persepolis
  cin >> s2 >> p2;
  
  int aggsco_pers = p1 + p2, aggsco_este = s1 + s2;
  
  if(aggsco_pers > aggsco_este) {
    cout << "Persepolis" << endl;
  }
  else if(aggsco_este > aggsco_pers) {
    cout << "Esteghlal" << endl;
  }
  else { // if aggregates are equal
    if(s1 > p2) {
      cout << "Esteghlal" << endl;
    }
    else if(p2 > s1) {
      cout << "Persepolis" << endl;
    }
    else {
      cout << "Penalty" << endl;
    }
  }
  
  return 0;
}
