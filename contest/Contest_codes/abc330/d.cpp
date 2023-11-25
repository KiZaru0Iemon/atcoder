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

  vvi rp(n);
  vi cn(n,0);
  rep(i,n){
    rep(j,n){
      if(S[i][j]=='o'){
        rp[i].push_back(j);
        cn[j]++;
      }
    }
  }

  ll ans=0;
  rep(i,n){
    if(rp[i].size()<=1)continue;
    rep(f,rp[i].size()-1){
      for(int s=f+1;s<(int)rp[i].size();s++){
        int t1=cn[rp[i][f]]-1;
        int t2=cn[rp[i][s]]-1;
        ans+=((t1 > 0)?t1:0);
        ans+=((t2 > 0)?t2:0);
      }
    }
  }
  cout<<ans<<nl;
}