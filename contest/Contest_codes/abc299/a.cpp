#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  string S; cin>>S;

  int c=0;
  int b[2];
  int st;
  rep(i,N){
    if(S[i]=='|'){
      b[c]=i;
      c++;
    }
    else if(S[i]=='*'){
      st=i;
    }
  }
  if(b[0]<st && st<b[1])
    cout<<"in"<<endl;
  else
    cout<<"out"<<endl;

  return 0;
}
