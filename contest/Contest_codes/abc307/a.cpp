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
  rep(i,N){
    int ttl=0;
    rep(j,7){
      int t;cin>>t;
      ttl+=t;
    }
    cout<<ttl<<" ";
  }
  cout<<nl;
}
