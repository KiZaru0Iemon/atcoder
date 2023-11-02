/* ~~~ 分数のmod ~~~ */
// O(log mn)
#include <bits/stdc++.h>
using namespace std;

// 拡張ユークリッド互除法(モジュラ逆数計算)
template <typename T>
pair<T,T> gcd2(T a, T b) {
  if(b==0) return pair<T,T>(1,0);
  pair<T,T> d = gcd2<T>(b,a%b);
  return pair<T,T>(d.second,d.first-(a/b)*d.second);
}

// 分数のmodの計算部分
template <typename T>
T mod_frac(T t, T b, T mn) {
  pair<T,T> tt=gcd2<T>(b,mn);
  T rb=tt.first;
  if(rb<0)rb=mn+rb;
  return (t*rb)%mn;
}

int main()
{
  cout<<mod_frac<long long int>(3141,5926,998244353)<<endl;
}

/*
a/b=c(mod m)
a*x=c(mod m)
c=(a*x)%m

1/b*b=1(mod m)
x*b=1(mod m)

x*b-1=q*m
x*b-q*m=1
x*b+(-q)*m=1
x=1/b
*/
