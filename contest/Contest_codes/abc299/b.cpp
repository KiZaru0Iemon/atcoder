#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N,T; cin>>N>>T;
  bool cc=false;
  vector<int> C(N);
  rep(i,N){
    cin>>C[i];
    if(C[i]==T)
      cc=true;
  }

  T=(cc)?T:C[0];

  int wp=0;
  int maxi=0;

  rep(i,N){
    int Ri; cin>>Ri;
    if(C[i]==T){
      if(Ri>maxi){
        wp=i;
        maxi=Ri;
      }
    }
  }

  cout<<wp+1<<endl;

  return 0;
}
