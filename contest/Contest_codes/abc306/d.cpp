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
  vector<char> X(N);
  vector<int> Y(N);
  rep(i,N)cin>>X[i]>>Y[i];

  vector<vector<ll>> dp(N+1,vector<ll>(2));
  rep(i,N){
    if(X[i]=='1'){
      dp[i+1][0]=dp[i][0];
      dp[i+1][1]=max(dp[i][1],dp[i][0]+Y[i]);
    }
    else {
      dp[i+1][0]=max(dp[i][0]+Y[i],max(dp[i][0],dp[i][1]+Y[i]));
      dp[i+1][1]=dp[i][1];
    }
  }
  cout<<max(dp[N][0],dp[N][1])<<nl;
}
