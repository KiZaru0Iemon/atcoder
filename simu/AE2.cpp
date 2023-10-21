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
  vi A(N);

  ll ave=0;
  rep(i,N){
    cin>>A[i];
    ave+=A[i];
  }
  ave/=N;

  ll m=0;
  ll p=0;
  rep(i,N){
    if(A[i]>ave){
      p+=A[i]-ave;
    } else {
      m+=ave-A[i];
    }
  }
  cout<<ave<<nl;
  cout<<m<<nl;
}
