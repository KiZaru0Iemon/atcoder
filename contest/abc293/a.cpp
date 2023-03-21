#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  string S;
  cin>>S;

  rep(i,S.size()){
    if(i&1)cout<<S[i-1];
    else cout<<S[i+1];
  }
  cout<<endl;

  return 0;
}
