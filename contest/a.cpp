#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  string S,T; cin>>S>>T;

  int num=0;
  rep(i,N){
    if((S[i]==T[i]) ||
       (S[i]=='l' && T[i]=='1') ||
       (S[i]=='1' && T[i]=='l') ||
       (S[i]=='o' && T[i]=='0') ||
       (S[i]=='0' && T[i]=='o')
    )num++;
  }
  cout<<((num==N)?"Yes":"No")<<endl;

  return 0;
}
