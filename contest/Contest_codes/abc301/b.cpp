#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  vector<int> A(N); rep(i,N)cin>>A[i];

  rep(i,A.size()-1){
    int diff=A[i+1]-A[i];
    if(diff > 1){
      for(int j=0; j<diff-1; j++){
        A.insert(A.begin()+i+1+j, A[i]+1+j);
      }
    }
    else if(diff < -1){
      for(int j=0; j>diff+1; j--){
        A.insert(A.begin()+i+1-j, A[i]-1+j);
      }
    }
  }

  rep(i,A.size()){
    cout<<A[i]<<" ";
  }
  cout<<endl;

  return 0;
}
