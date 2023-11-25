#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define rep(i,e) for(ll i=0;i<(ll)(e);i++)
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
  ll d; cin>>d;

  ll n=ll(sqrt(d))+1;
  ll ans=LONG_LONG_MAX;
  rep(x,n){
    ll y=d-x*x;
    y=ll(sqrt(y));
    ans=min(ans,abs(x*x+y*y-d));
    y++;
    ans=min(ans,abs(x*x+y*y-d));
  }
  cout<<ans<<nl;
}