/*幅優先探索*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

int H,W,N;
vector<vector<char>> e;
vector<vector<char>> visited;
vector<vector<int>> dist;
int dir[][2]={{0,-1},{0,1},{-1,0},{1,0}};

int bfs(P s, P g)
{
  queue<P> q;
  visited[s.first][s.second]=true;
  dist[s.first][s.second]=0;
  q.push(s);

  while(q.size()){
    P c=q.front(); q.pop();
    int cf=c.first;
    int cs=c.second;

    if(c==g)
      return dist[cf][cs];

    rep(i,4){
      int uf=cf+dir[i][0];
      int us=cs+dir[i][1];
      P u={uf,us};

      if(uf<0 || uf>=H || us<0 || us>=W)continue;
      if(visited[uf][us] || e[uf][us]=='X')continue;

      visited[uf][us]=true;
      dist[uf][us]=dist[cf][cs]+1;
      q.push(u);
    }
  }

  return -1;
}

int main()
{
  //入力
  map<char,P> position;
  cin>>H>>W>>N;
  e.resize(H);
  visited.resize(H);
  dist.resize(H);
  rep(i,H){
    e[i].resize(W);
    visited[i].assign(W,false);
    dist[i].assign(W,0);
  }
  rep(i,H)
    rep(j,W){
      cin>>e[i][j];
      //各工場の位置情報をmapで保存
      if(e[i][j]!='.' && e[i][j]!='X'){
        position[e[i][j]]={i,j};
      }
    }

  //初期値
  int eatT=0;
  char s='S';
  char g='1';

  //探索
  rep(i,N){
    //出発地と目的地の最短距離探索
    eatT+=bfs(position[s],position[g]);

    //出発地と目的地の更新
    s=g;
    g++;

    //reset
    rep(j,H)
      rep(k,W){
        visited[j][k]=false;
        dist[j][k]=0;
      }
  }

  cout<<eatT<<endl;

  return 0;
}
