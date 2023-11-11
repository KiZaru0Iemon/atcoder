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
using P=pair<char,int>;
using vi=vector<int>;
using vvi=vector<vi>;

string S;

int layer(int i)
{
  int pprev=0;
  int prev=i;
  i++;

  while(i<(int)S.size()){
    if(S[i]=='A')
      i=layer(i);
    else if(S[i]=='B'){
      if(S[prev]=='A'){
        pprev=prev;
        prev=i;
      }
      else
        pprev=prev=-1;
      i++;
    }
    else if(S[i]=='C'){
      if(S[pprev]=='A' && S[prev]=='B'){
        S[pprev]=S[prev]=S[i]='#';
        i++;
        return i;
      }
      else{
        pprev=prev=-1;
        i++;
      }
    }
  }
  return i;
}

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);
  cin>>S;
  layer(-1);
  rep(i,S.size()){
    if(S[i]!='#')cout<<S[i];
  }
  cout<<nl;
}
