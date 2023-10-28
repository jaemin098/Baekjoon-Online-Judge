#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr1[4], arr2[2];
  
  for(int i = 0; i < 4; i++) {
    cin >> arr1[i];
  }
  for(int i = 0; i < 2; i++) {
    cin >> arr2[i];
  }
  
  sort(arr1, arr1 + 4);
  sort(arr2, arr2 + 2);
  
  int max_score = (arr1[1] + arr1[2] + arr1[3]);
  max_score += (arr2[1]);
  
  cout << max_score << endl;
  
  return 0;
}
