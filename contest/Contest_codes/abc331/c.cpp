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
using vi=vector<ll>;
using vvi=vector<vi>;

int main()
{
  int n; cin>>n;
  vi A(n);
  vi sA(n);
  rep(i,n){
    cin>>sA[i];
    A[i]=sA[i];
  }
  sort(all(sA));
  map<ll,ll> mp;

  ll w=A[n-1];
  mp[A[n-1]]=0;
  int num=0;
  rrep(i,n-1){
    if(sA[i]==w){
      num++;
    }
    else {
      mp[sA[i]]=mp[w]+w*num;
      w=sA[i];
      num=1;
    }
  }

  rep(i,n){
    cout<<mp[A[i]]<<" ";
  }
  cout<<nl;
}
