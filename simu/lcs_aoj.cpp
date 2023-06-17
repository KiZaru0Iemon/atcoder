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
  int q; cin>>q;
  vector<string> X(q),Y(q);
  rep(i,q)cin>>X[i]>>Y[i];

  int dp[q+1][q+1];
}
