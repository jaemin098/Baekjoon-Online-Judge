#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  
  int lowest, highest;
  lowest = min(min(a, b), min(c, d));
  highest = max(max(a, b), max(c, d));
  
  int team1, team2;
  team1 = lowest + highest;
  team2 = (a + b + c + d) - team1;
  
  cout << abs(team1 - team2) << endl;
  
  return 0;
}
