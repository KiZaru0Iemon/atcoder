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
  int n,s,m,l; cin>>n>>s>>m>>l;
  int mon=INT_MAX;

  rep(i,18){
    rep(j,14){
      rep(k,10){
        if(i*6+j*8+k*12>=n){
          mon=min(mon,i*s+j*m+k*l);
        }
      }
    }
  }

  cout<<mon<<nl;
}
