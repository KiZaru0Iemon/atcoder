#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define nl '\n'
using ll=long long int;
using P=pair<int,int>;

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);
  unsigned long long int sum=0;
  rep(i,64){
    bool t; cin>>t;
    if(t)sum+=(unsigned long long int)pow(2,i);
  }
  cout<<sum<<nl;
}
