/* ~~~ union find ~~~ */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

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
  int N,Q; cin>>N>>Q;
  union_find uf(N);
  vector<char> ans;

  rep(i,Q){
    int q,a,b; cin>>q>>a>>b;

    if(q){
      ans.push_back(uf.same(a,b)?true:false);
    }
    else{
      uf.unite(a,b);
    }
  }

  rep(i,ans.size())
    cout<<(ans[i]?"Yes":"No")<<endl;

  return 0;
}
