#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int tb[10010];

int main()
{
  int N,W; cin>>N>>W;
  vector<int> v(N),w(N);
  rep(i,N)
    cin>>v[i]>>w[i];

  rep(i,N){
    for(int j=W;j>=0;j--){
      if(w[i]<=j)
        tb[j]=max(tb[j-w[i]]+v[i],tb[j]);
    }
  }

  cout<<tb[W]<<endl;

  return 0;
}
