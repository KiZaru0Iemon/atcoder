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

  vi tA(N);
  rep(i,N) cin>>tA[i];
  sort(all(tA));

  vi A,C,C2;
  A.push_back(tA[0]);
  C.push_back(1);
  C2.push_back(1);
  int j=0;
  rep2(i,1,N){
    if(tA[i]==A[j]){ 
      C[j]++;
      C2[j]++;
    }
    else {
      A.push_back(tA[i]);
      C.push_back(C[j]+1);
      C2.push_back(1);
      j++;
    }
  }

  //rep(i,A.size()){
  //  cout<<A[i]<<" "<<C[i]<<" "<<C2[i]<<nl;
  //}

  ll maxi=0;
  rep(i,A.size()){
    int e=lower_bound(all(A),A[i]+M-1)-A.begin();
    if(A[e]>A[i]+M-1)e--;
    maxi=max(maxi,(ll)(C[e]-C[i]+C2[i]));
  }
  cout<<maxi<<nl;
}
