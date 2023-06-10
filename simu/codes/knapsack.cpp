#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int tb[110][10010];

int main()
{
  int N,W; cin>>N>>W;
  vector<int> v(N),w(N);
  rep(i,N)
    cin>>v[i]>>w[i];

  rep(i,N){
    rep(j,W+1){
      if(w[i]<=j) tb[i+1][j]=max(tb[i][j-w[i]]+v[i],tb[i][j]);
      else tb[i+1][j]=tb[i][j];
    }
  }

  cout<<tb[N][W]<<endl;

  return 0;
}
