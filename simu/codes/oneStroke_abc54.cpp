#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N,M,num;
vector<vector<int>> adj;

//次に探索する頂点、探索済みの頂点情報
void bfs(int c, vector<char> visited)
{
  visited[c]=true;

  //次に探索するnodeがあるのか確認(葉ノード?)
  int child=0;
  for(auto u : adj[c])
    if(!visited[u]){
      child++;
      //葉ノードでなければ子ノードをさらに探索するためbfsを呼ぶ
      bfs(u,visited);
    }

  if(child==0){
    unsigned int ok_s=0;
    //葉ノードであれば探索した頂点の確認
    rep(i,visited.size())
      if(visited[i])
        ok_s++;
    //  全頂点探索済みであればnum++
    if(ok_s==visited.size())
      num++;
    return;
  }
}

int main()
{
  cin>>N>>M;
  adj.resize(N);
  rep(i,M){
    int ai,bi;
    cin>>ai>>bi;
    ai--; bi--;
    adj[ai].push_back(bi);
    adj[bi].push_back(ai);
  }

  vector<char> visited(N,false);
  bfs(0,visited);

  cout<<num<<endl;

  return 0;
}
