/* ~~~ ダイクストラ法 ~~~ */
// O(n+mlog(m)) n:node数,m:edge数
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define nl '\n'
using ll=long long int;
using P=pair<int,int>;

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);

  //隣接リスト作成
  int V,E,r; cin>>V>>E>>r; //頂点数,辺数,始点番号
  vector<vector<P>> adj(V); //隣接先番号,重み
  rep(i,E){
    int ts,tt,td; cin>>ts>>tt>>td;
    adj[ts].emplace_back(tt,td);
  }

  //ダイクストラ法 ( a -w-> b )
  vector<int> dist(V,int(INFINITY)); //各頂点までの距離
  vector<char> processed(V); //各頂点の処理済み配列
  priority_queue<P> q; //優先度付きキュー (-distance,node)
  dist[r] = 0;
  q.emplace(0,r);
  while(q.size()){
    int a=q.top().second; q.pop();
    if(processed[a])continue;
    processed[a]=true;
    for(auto u : adj[a]){
      int b=u.first, w=u.second;
      if(dist[a]+w < dist[b]){
        dist[b]=dist[a]+w;
        q.emplace(-dist[b],b);
      }
    }
  }

  //結果出力
  rep(i,V){
    if(dist[i]==int(INFINITY))
      cout<<"INF"<<nl;
    else
      cout<<dist[i]<<nl;
  }
}
