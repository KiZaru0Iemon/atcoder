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

  //入力
  int q; cin>>q;
  vector<string> X(q),Y(q);
  rep(i,q)cin>>X[i]>>Y[i];

  //dpテーブル
  int dp[1010][1010];

  rep(k,q){
    //初期化
    rep(i,1010)
      rep(j,1010)
        dp[i][j]=0;

    //lcsのdpによる調査
    rep(i,X[k].size()){
      rep(j,Y[k].size()){
        dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
        if(X[k][i]==Y[k][j]) dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+1);
      }
    }
    cout<<dp[X[k].size()][Y[k].size()]<<nl;
  }
}

/*
  基本的に二つの列を考える．横方向または下方向の移動は何もしない．また、１つの比較で1文字しか増えない。
  もし文字が一致する場合は右斜め下方向に+1する。
  比較している文字ですでに+1されていれば、横方向の移動より値が大きくなることはないため、実質増えていないことになる。
  以上を踏まえて上記のプログラムで最長部分列を発見できる。
*/
