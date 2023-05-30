#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N,M; cin>>N>>M;
  vector<int> row(N);
  vector<vector<char>> tb(N,vector<char>(N,false));

  rep(i,M) {
    rep(j,N){
      cin>>row[j];
      row[j]--;
    }

    rep(j,N-1){
      int pf,ps;
      pf=min(row[j],row[j+1]);
      ps=max(row[j],row[j+1]);
      tb[pf][ps]=true;
    }
  }

  int num=0;
  for(int i=0; i<N-1; i++){
    for(int j=i+1; j<N; j++){
      if(!tb[i][j])num++;
    }
  }

  cout<<num<<endl;

  return 0;
}
