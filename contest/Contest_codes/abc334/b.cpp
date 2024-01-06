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
  ll A,M,L,R; cin>>A>>M>>L>>R;

  ll num;
  L-=A; R-=A;
  ll tL,tR;
  if(L%M==0)
    tL=L;
  else if(L%M<0)
    tL=(L/M)*M;
  else
    tL=(L/M+1)*M;

  if(R%M==0)
    tR=R;
  else if(R%M<0)
    tR=(R/M-1)*M;
  else
    tR=(R/M)*M;

  num=(tR-tL)/M+1;

  cout<<num<<nl;
}
