/* ~~~ ダイクストラ法 ~~~ */
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
  vector<vector<P>> adl(V); //隣接先番号,重み
  rep(i,E){
    int ts,tt,td; cin>>ts>>tt>>td;
    adl[ts].emplace_back(tt,td);
  }

  //ダイクストラ法
  vector<int> dist(V,INFINITY); //各頂点までの距離
  vector<char> processed(V,false);
  priority_queue<P> q; //優先度付きキュー (-distance,node)
  dist[r] = 0;
  q.emplace(0,r);
  while(q.size()){
    int a=q.top().second; q.pop();
    if(processed[a])continue;
  }
}
