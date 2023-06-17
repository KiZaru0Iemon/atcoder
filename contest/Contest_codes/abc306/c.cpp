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
  int N; cin>>N;
  vector<int> fnum(N);
  vector<P> f(N);
  N*=3;
  rep(i,N){
    int t; cin>>t;
    t--;
    fnum[t]++;
    if(fnum[t]==2)
      f[t]=(P){i,t+1};
  }
  sort(f.begin(),f.end());
  N/=3;
  rep(i,N)
    cout<<f[i].second<<" ";
  cout<<nl;
}
