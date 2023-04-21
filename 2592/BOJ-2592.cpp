#include <iostream>

using namespace std;

int main() {
  int arr[10] = {0, };
  
  for(int i = 0; i < 10; i++) {
    int num;
    cin >> num;
    arr[i] = num;
  }
  
  int sum = 0, avg = 0;
  for(int i = 0; i < 10; i++) {
    sum = sum + arr[i];
  }
  avg = sum / 10;
  
  int max_cnt = 0, mode = -1;
  for(int i = 0; i < 10; i++) {
    int cnt = 1;
    for(int j = i + 1; j < 10; j++) {
      if(arr[i] == arr[j]) {
        cnt++;
      }
    }
    if(cnt > max_cnt) {
      max_cnt = cnt;
      mode = arr[i];
    }
  }
  
  cout << avg << "\n";
  cout << mode << "\n";
  
  return 0;
}
