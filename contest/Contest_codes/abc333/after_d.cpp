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

class union_find {
public:
  vector<int> par;

  //par[i]==iならば根 (初めはすべて根)
  union_find(int n):par(n) {
    for(int i=0;i<n;i++) par[i]=i;
  }

  //根要素を求める(同時に根以外のnodeを根に繋ぎ直す:経路圧縮)
  int root(int x) {
    return (par[x]==x) ? x : (par[x]=root(par[x]));
  }

  //x,yが同じ集合かを調べる
  bool same(int x, int y) {
    return root(x)==root(y);
  }

  //y集合をx集合に併合
  void unite(int x, int y) {
    x=root(x); y=root(y);
    if(x!=y) par[y]=x;
  }
};

int main()
{
  int N;
  cin>>N;
  union_find uf(N);
  rep(i,N-1){
    int a,b; cin>>a>>b;
    a--; b--;
    if(a!=0 && b!=0)
      uf.unite(a,b);
  }

  rep(i,N)
    uf.root(i);

  map<int,int> mp;
  for(auto it : uf.par){
    if(mp.count(it))
      mp[it]++;
    else
      mp[it]=1;
  }

  int sum=0, maxi=0;
  for(auto kv : mp){
    maxi=max(maxi,kv.second);
    sum+=kv.second;
  }
  cout<<sum-maxi<<nl;
}
