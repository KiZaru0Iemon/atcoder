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
  sort(all(A));
  sort(all(B));

  int ans=B[M-1]+1;
  rep(iA,N){
    int iB=lower_bound(all(B),A[iA])-B.begin();
    int an=iA+1;
    int bn=M-iB;
    if(an>=bn){
      ans=A[iA];
      break;
    }
  }
  cout<<((ans>B[M-1])?B[M-1]+1:ans)<<nl;
}
