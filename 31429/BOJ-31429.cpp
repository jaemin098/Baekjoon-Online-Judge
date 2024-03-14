#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, vector<int>> scr_brd;

void com_map(void) {
  scr_brd[1] = {12, 1600};
  scr_brd[2] = {11, 894};
  scr_brd[3] = {11, 1327};
  scr_brd[4] = {10, 1311};
  scr_brd[5] = {9, 1004};
  scr_brd[6] = {9, 1178};
  scr_brd[7] = {9, 1357};
  scr_brd[8] = {8, 837};
  scr_brd[9] = {7, 1055};
  scr_brd[10] = {6, 556};
  scr_brd[11] = {6, 773};
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  
  com_map();
  
  int n; cin >> n;
  
  cout << scr_brd[n][0] << ' ' << scr_brd[n][1] << endl;
  
  return 0;
}
