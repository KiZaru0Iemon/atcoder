#pragma GCC optimize("O3")
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
  cin.tie(nullptr)->sync_with_stdio(false);
  int N; cin>>N;
  vi W(N),X(N);
  rep(i,N)cin>>W[i]>>X[i];

  ll maxi=0;
  rep(i,24){
    ll temp=0;
    rep(j,N){
      int s=(i+X[j])%24;
      int e=(i+1+X[j])%24;
      if(9<=s && s<=18 && 9<=e && e<=18){
        temp+=W[j];
      }
    }
    maxi=max(temp,maxi);
  }

  cout<<maxi<<nl;
}
