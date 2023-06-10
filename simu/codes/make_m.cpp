#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  vector<int> A(N); rep(i,N)cin>>A[i];
  sort(A.begin(),A.end());

  int num=N/2;
  for(int i=0;i<num;i++) {
    if(A[i]<A[i+num+1] && A[i+num+1]>A[i+1])continue;
    else{
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;

  return 0;
}
