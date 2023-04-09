#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  string S; cin>>S;

  int b[2]={0};
  int r[2]={0};
  int k=-1;

  int j=0,l=0;

  rep(i,8){
    if(S[i]=='B')
      b[j++]=i;
    else if(S[i]=='R')
      r[l++]=i;
    else if(S[i]=='K')
      k=i;
  }

  if((b[0]&1)==(b[1]&1)){
    cout<<"No"<<endl;
    return 0;
  }
  if(!(r[0]<k && k<r[1])){
    cout<<"No"<<endl;
    return 0;
  }
  cout<<"Yes"<<endl;

  return 0;
}
