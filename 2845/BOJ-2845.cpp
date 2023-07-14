#include <iostream>

using namespace std;

int main() {
  int people, arena;
  cin >> people >> arena;
  
  int cnt = people * arena;
  
  for(int i = 0; i < 5; i++) {
    int news;
    cin >> news;
    
    cout << news - cnt << ' ';
  }
  
  return 0;
}
