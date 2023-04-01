#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N,M; cin>>N>>M;
  vector<int> A(N);
  vector<int> B(M);
  vector<P> C(N+M);

  rep(i,N)cin>>A[i];
  rep(i,M)cin>>B[i];

  rep(i,N+M){
    if(i<N)
      C[i]=(P){A[i],1};
    else
      C[i]=(P){B[i-N],0};
  }

  sort(C.begin(),C.end());

  rep(i,N+M)
    if(C[i].second)
      cout<<(i+1)<<" ";
  cout<<endl;

  rep(i,N+M)
    if(!C[i].second)
      cout<<(i+1)<<" ";
  cout<<endl;

  return 0;
}
