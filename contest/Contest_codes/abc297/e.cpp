#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N,K; cin>>N>>K;
  vector<int> A(N); rep(i,N)cin>>A[i];

  sort(A.begin(),A.end());
  for(int i=0;i<(int)A.size();i++){
    for(int j=0;j<(int)A.size();j++){
      if(i<j){
        if(A[j]%A[i]==0)A.erase(A.begin()+j);
      }
    }
  }

  vector<int> as(A.size())={0};
  as[0]++;

  rep(i,K){
  }

  return 0;
}
