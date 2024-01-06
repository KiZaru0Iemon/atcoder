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
  int N,Q; cin>>N>>Q;

  vector<P> d(N);
  rep(i,N) d[i]={i+1,0};

  vector<P> ans;

  int s=0;
  rep(i,Q){
    int qn; cin>>qn;
    if(qn==1){
      char C; cin>>C;
      P pres=d[s];
      s=(s-1>=0)?s-1:N-1;
      switch(C){
        case 'R': d[s]={pres.first+1, pres.second}; break;
        case 'L': d[s]={pres.first-1, pres.second}; break;
        case 'U': d[s]={pres.first, pres.second+1}; break;
        case 'D': d[s]={pres.first, pres.second-1}; break;
      }
    }
    else{
      int p,tp; cin>>p;
      p--;
      if(s+p>N-1)
        tp=s+p-N;
      else
        tp=s+p;
      ans.push_back(d[tp]);
    }
  }

  rep(i,ans.size())
    cout<<ans[i].first<<" "<<ans[i].second<<nl;
}
