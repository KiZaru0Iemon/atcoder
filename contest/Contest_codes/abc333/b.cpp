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
  string S,T;
  cin>>S>>T;

  int sn=max(S[0],S[1])-min(S[0],S[1]);
  if(sn>2)sn=5-sn;
  int tn=max(T[0],T[1])-min(T[0],T[1]);
  if(tn>2)tn=5-tn;

  cout<<((sn==tn)?"Yes":"No")<<nl;
}
