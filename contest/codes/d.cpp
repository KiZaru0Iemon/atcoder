#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

ll num=0;

int gcd(ll a,ll b){
  if(b==0) return a;
  num+=a/b;
  return gcd(b,a%b);
}

int main()
{
  ll A,B; cin>>A>>B;

  gcd(A,B);

  cout<<num-1<<endl;

  return 0;
}
