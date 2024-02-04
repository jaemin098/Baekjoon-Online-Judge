#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  
  int n, m;
  cin >> n >> m;
  
  char origin[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> origin[i][j];
    }
  }
  
  char compare[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> compare[i][j];
    }
  }
  
  // reverse pixels
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(origin[i][j] == 'W') {
        origin[i][j] = 'B';
      }
      else if(origin[i][j] == 'B') {
        origin[i][j] = 'W';
      }
    }
  }
  
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(origin[i][j] != compare[i][j]) {
        cnt += 1;
      }
    }
  }
  
  cout << cnt << '\n';
  
  return 0;
}
