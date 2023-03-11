#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

// == 深さ優先探索 ==
// O(n+m) n:node数, m:edge数
vector<int> adj[N]; //各番号の隣接リスト
bool visited[N]; //各番号について探索済かどうかを保存

void dfs(int s)
{
  //探索する番号を見て探索済であれば戻る
  if(visited[s]) return;
  //探索する番号を見て未探索であれば探索済にする
  visited[s] = true;

  //隣接リストadjの各要素を持ってきてそれぞれについて済かどうかを探索
  for(auto u: adj[s]){
    dfs(u);
  }
}

// == 深さ優先探索(スタックによる実装) ==
// 再帰関数によるスタックオーバーフローを防ぐために、スタックを利用した方法もある
// 1. 初期位置をスタックに入れる
// 2. スタックから位置を取り出し、訪れてない場所をスタックに入れる
// 3. 2を繰り返す
// この工程のキューを使ったものが次の幅優先探索

// == 幅優先探索 ==
// O(n+m) n:node数, m:edge数
vector<int> adj[N]; //各番号の隣接リスト
queue<int> q; //処理すべきノードが距離の昇順(新：末尾、古：先頭(次処理するやつ))
bool visited[N]; //各番号について探索済かどうかを保存
int distance[N]; //開始ノードからグラフの全ノードまでの距離

void bfs(int x) // x:探索を開始するノード
{
  //開始のノードについての情報を入れる
  visited[x]=true;
  distance[x]=0;
  //幅優先で探索するノードをキューに挿入
  q.push(x);

  //キューが空になるまで探索
  while(!q.empty()){
    //探索するノードをキューから取り出す
    int s=q.front(); q.pop();
    //着目するノードの隣接ノードを探索
    for(auto u: adj[s]) {
      if(visited[u])continue;
      distance[u] = distance[s]+1; //探索中のノードは親ノード+1の距離
      q.push(u); //探索する必要があるためキューに入れる
    }
  }
}

int main()
{

  return 0;
}
