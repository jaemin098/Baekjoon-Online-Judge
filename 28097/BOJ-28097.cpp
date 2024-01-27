#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  
  int study_time = 0;
  for(int i = 0; i < n; i++) {
    int t; cin >> t;
    study_time += t;
  }
  
  int break_time = 0;
  for(int i = 1; i < n; i++) {
    break_time += 8;
  }
  
  int tot_time = study_time + break_time;
  int day = tot_time / 24, hour = tot_time - (24 * day);
  
  cout << day << ' ' << hour << '\n';
  
  return 0;
}
