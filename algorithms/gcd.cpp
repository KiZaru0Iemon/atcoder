/* ~~~ ユークリッド互除法による最大公約数 ~~~ */
// O(log(min(a,b)))
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd(T a, T b) {
  if(b==0)return a;
  else return gcd<T>(b,a%b);
}

int main()
{
  int a,b;
  a=0;
  b=15;
  cout<< gcd<int>(a,b) <<endl;
}
