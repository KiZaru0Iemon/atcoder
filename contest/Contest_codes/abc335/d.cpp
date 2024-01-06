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
  int N; cin>>N;

  vvi mx(N, vi(N));
  mx[(N-1)/2][(N-1)/2] = -1;

  P now={0,0};
  int vn=0;
  int vec[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
  rep2(i,1,N*N){
    mx[now.first][now.second]=i;

    if(0 <= now.first+vec[vn][0]  && now.first+vec[vn][0] < N  &&
       0 <= now.second+vec[vn][1] && now.second+vec[vn][1] < N &&
       mx[now.first+vec[vn][0]][now.second+vec[vn][1]]==0){
      now.first+=vec[vn][0];
      now.second+=vec[vn][1];
    }
    else{
      vn=(vn+1<=3)?vn+1:0;
      now.first+=vec[vn][0];
      now.second+=vec[vn][1];
    }
  }

  rep(i,N){
    rep(j,N){
      if(mx[i][j]==-1) cout<<'T'<<' ';
      else cout<<mx[i][j]<<' ';
    }
    cout<<nl;
  }
}
