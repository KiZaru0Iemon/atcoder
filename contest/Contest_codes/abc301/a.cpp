#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  string S; cin>>S;
  int t=0,a=0;
  int wt=-1,wa=-1;
  rep(i,N){
    if(S[i]=='T'){
      t++;
      wt=i;
    }
    else{
      a++;
      wa=i;
    }
  }
  if(t!=a){
    cout<<((t>a)?'T':'A')<<endl;
  }else{
    cout<<((wt<wa)?'T':'A')<<endl;
  }

  return 0;
}
