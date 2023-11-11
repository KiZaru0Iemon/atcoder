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

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);
  string S; cin>>S;

  auto layer=[&](auto func, int i) -> int {
    int pprev=-1, prev=i;
    i++;

    while(i<(int)S.size()){
      if(S[i]=='A')
        i=func(func,i);
      else if(S[prev]=='A' && S[i]=='B'){
        pprev=prev;
        prev=i;
      }
      else if(S[pprev]=='A' && S[prev]=='B' && S[i]=='C'){
        S[pprev]=S[prev]=S[i]='#';
        return i;
      }
      else
        pprev=prev=-1;
      i++;
    }
    return i;
  };

  layer(layer,-1);
  rep(i,S.size()){
    if(S[i]!='#')cout<<S[i];
  }
  cout<<nl;
}
