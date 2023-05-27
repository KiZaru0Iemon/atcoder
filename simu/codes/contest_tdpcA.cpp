#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  vector<int> p(N);
  int M=0;
  rep(i,N){
    cin>>p[i];
    M+=p[i];
  }

  sort(p.begin(),p.end());
  vector<vector<char>> tb(N+1,vector<char>(M+1,false));

  tb[0][0]=true;
  for(int i=1;i<N+1;i++){
    for(int j=0;j<M+1;j++){
      if(j-p[i-1]>=0) tb[i][j] |= tb[i-1][j-p[i-1]];
      tb[i][j] |= tb[i-1][j];
    }
  }

  int num=0;
  rep(i,M+1){
    if(tb[N][i])
      num++;
  }
  cout<<num<<endl;

  return 0;
}
