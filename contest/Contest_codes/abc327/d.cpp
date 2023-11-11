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
  int N,M; cin>>N>>M;
  vi A(M),B(M);
  rep(i,M)cin>>A[i];
  rep(i,M)cin>>B[i];

  map<int,vi> adl;
  rep(i,M){
    int a=A[i];
    int b=B[i];
    adl[a].push_back(b);
    adl[b].push_back(a);
  }
  map<int,bool> vid;
  map<int,bool> kvid;
  vb col(N,false);

  unsigned int ct=0;
  stack<int> sta;
  int key=adl.begin()->first;
  sta.push(key);

  while(ct!=adl.size()){
    key=sta.top(); sta.pop();
    if(kvid.count(key))continue;
    ct++;
    vid[key]=true;
    kvid[key]=true;
    rep(i,adl[key].size()){
      int ii=adl[key][i];
      sta.push(ii);
      if(col[key]==col[ii]){
        if(!vid.count(ii)){
          vid[ii]=true;
          col[ii]=!col[ii];
        }
        else{
          cout<<"No"<<nl;
          return 0;
        }
      }
    }

    if(!sta.size() && ct<adl.size()){
      for(auto it=adl.begin();it!=adl.end();it++){
        if(!kvid.count(it->first)){
          sta.push(it->first);
        }
      }
    }
  }
  cout<<"Yes"<<nl;
}
