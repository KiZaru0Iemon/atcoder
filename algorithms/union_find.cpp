/* ~~~ union find ~~~ */
// O(log(n))以下  n:node数
#include <bits/stdc++.h>
using namespace std;

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
  // N:node数, Q:query数(union findとは関係ない数)
  int N,Q; cin>>N>>Q;
  union_find uf(N);
  vector<char> ans;

  for(int i=0; i<Q; i++) {
    int q,a,b; cin>>q>>a>>b;

    //qがtrueで確認、qがfalseで結合処理をする
    if(q){
      // node a,bが結合しているか確認
      ans.push_back(uf.same(a,b)?true:false);
    }
    else{
      // node a,bを結合
      uf.unite(a,b);
    }
  }

  //各根ノードを一致させる
  //これをやると各塊の個数を求められる
  for(int i=0; i<N; i++)
    uf.root(i);

  //qのtrueの部分の結果確認
  for(int i=0; i<(int)ans.size(); i++) {
    cout<<(ans[i]?"Yes":"No")<<endl;
  }

  return 0;
}
