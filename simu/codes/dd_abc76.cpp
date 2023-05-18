#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  string Sd,T; cin>>Sd>>T;

  int i;
  for(i=Sd.size()-T.size(); i>=0; i--){
    int ss=0;
    rep(j,T.size()){
      if(Sd[i+j]==T[j] || Sd[i+j]=='?') ss++;
      else break;
    }
    if(ss==(int)T.size()){
      rep(j,T.size())
        Sd[i+j]=T[j];
      break;
    }
  }

  if(i==-1){
    cout<<"UNRESTORABLE"<<endl;
    return 0;
  }

  rep(l,Sd.size()){
    if(Sd[l]=='?')
      Sd[l]='a';
  }

  cout<<Sd<<endl;

  return 0;
}

