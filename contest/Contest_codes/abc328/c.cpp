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
  cin.tie(nullptr)->sync_with_stdio(false);
  int N,Q; cin>>N>>Q;
  string S; cin>>S;
  vi snum(N,0);
  rep2(i,1,N){
    if(S[i-1]==S[i]){
      snum[i]=snum[i-1]+1;
    }
    else{
      snum[i]=snum[i-1];
    }
  }

  rep(i,Q){
    int l,r; cin>>l>>r;
    l--; r--;
    cout<<(snum[r]-snum[l])<<nl;
  }
}
