#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define rep2(i,s,e) for(int i=(int)(s);i<(int)(e);i++)
#define rrep(i,s) for(int i=(int)(s);i>=0;i--)
#define rrep2(i,s,e) for(int i=(int)(s);i>=(int)(e);i--)
#define all(x) (x).begin(),(x).end()
using ll=long long int;
using vb=basic_string<bool>;
using vvb=vector<vb>;
using P=pair<int,int>;
using vi=vector<int>;
using vvi=vector<vi>;

int main()
{
  int n; cin>>n;
  vector<string> S(n);
  rep(i,n)cin>>S[i];

  vi rn(n,0);
  vi cn(n,0);
  rep(i,n){
    rep(j,n){
      if(S[i][j]=='o'){
        rn[i]++;
        cn[j]++;
      }
    }
  }

  ll ans=0;
  rep(i,n){
    rep(j,n){
      if(S[i][j]=='o'){
        if(rn[i]-1>0 && cn[j]-1>0)
          ans+=(rn[i]-1)*(cn[j]-1);
      }
    }
  }
  cout<<ans<<nl;
}