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
  int N,M; cin>>N>>M;

  vi ps(N,0);
  vector<set<int>> stbl(M+1);
  int maxs=0;

  rep(i,M){
    int p; cin>>p; p--;
    if(ps[p]>0){
      stbl[ps[p]].erase(p);
    }
    if(ps[p]==maxs)maxs++;
    ps[p]++;
    stbl[ps[p]].insert(p);
    cout<< *begin(stbl[maxs])+1 <<nl;
  }
}