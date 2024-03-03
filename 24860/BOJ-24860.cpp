#include <iostream>

using namespace std;

int main() {
  long vk, jk;
  cin >> vk >> jk;
  
  long vl, jl;
  cin >> vl >> jl;
  
  long vh, dh, jh;
  cin >> vh >> dh >> jh;
  
  long lchains = (vk * jk) + (vl * jl);
  long hchains = vh * dh * jh;
  
  cout << lchains * hchains << '\n';
  
  return 0;
}
