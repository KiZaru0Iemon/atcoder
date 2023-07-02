#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
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
  cin.tie(nullptr)->sync_with_stdio(false);

  string S,T; cin>>S>>T;
  int Ss=S.size(),Ts=T.size();

  vvi dp(Ss+1,vi(Ts+1));
  rep(i,Ss){
    rep(j,Ts){
      dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
      if(S[i]==T[j])dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+1);
    }
  }
  cout<<(max(Ss,Ts)-dp[Ss][Ts])<<nl;
}
