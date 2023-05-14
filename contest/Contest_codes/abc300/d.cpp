#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

bool prime(int n)
{
  if(n<2) return false;
  for(int x=2;x*x<=n;x++)
    if(n%x==0) return false;
  return true;
}

int main()
{
  ll N; cin>>N;

  return 0;
}
