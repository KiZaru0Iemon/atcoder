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
  int N,M; cin>>N>>M;
  vi A(N),B(M);
  rep(i,N)cin>>A[i];
  rep(i,M)cin>>B[i];

  vector<P> T;
  rep(i,N)T.emplace_back(A[i],0);
  rep(i,M)T.emplace_back(B[i]+1,1);
  sort(all(T));

  int na=0,nb=M;
  for(auto [t,w] : T){
    if(w)na++; else nb--;
    if(na>=nb){
      cout<<t<<nl;
      return 0;
    }
  }
}
