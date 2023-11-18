#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define rep2(i,s,e) for(int i=(int)(s);i<(int)(e);i++)
#define rrep(i,s) for(int i=(int)(s);i>=0;i--)
#define rrep2(i,s,e) for(int i=(int)(s);i>=(int)(e);i--)
#define all(x) (x).begin(),(x).end()
using ll=long long int;
using vb=basic_string<bool>;
using vvb=vector<vb>;
using P=pair<int,int>;
using vi=vector<int>;
using vvi=vector<vi>;

int main()
{
  int N; cin>>N;
  string S; cin>>S;

  map<char,int> lang;
  int t=S[0];
  int tn=0;
  rep(i,N){
    if(t!=S[i]){
      if(lang.count(t))
        lang[t]=max(lang[t],tn);
      else
        lang[t]=tn;
      t=S[i];
      tn=1;
    }
    else{
      tn++;
    }
  }
  if(lang.count(t))
    lang[t]=max(lang[t],tn);
  else
    lang[t]=tn;

  int sum=0;
  for(auto it : lang){
    sum+=it.second;
  }
  cout<<sum<<nl;
}