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

ll repunit(int n)
{
  ll v=0;
  ll addv=1;
  rep(i,n){
    v+=addv;
    addv*=10;
  }
  return v;
}

int main()
{
  int N; cin>>N;

  ll ans=0;
  rep2(mx,1,100){

    rep2(i,1,mx+1){
      rep2(j,1,i+1){
        ans=repunit(i)+repunit(j)+repunit(mx);
        if(--N<=0){
          cout<<ans<<nl;
          return 0;
        }
      }
    }

  }

}
