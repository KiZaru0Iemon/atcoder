#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int H,W;
vector<vector<char>> s;
vector<vector<char>> visited;
vector<vector<int>> dist;
int dire[][2]={{0,1},{0,-1},{1,0},{-1,0}};

void bfs()
{
  queue<P> q;
  visited[0][0]=true;
  dist[0][0]=0;
  q.push({0,0});

  while(q.size()){
    P c=q.front(); q.pop();
    int cf=c.first;
    int cs=c.second;
    rep(i,4){
      int uf=cf+dire[i][0];
      int us=cs+dire[i][1];
      if(uf<0 || uf>=H || us<0 || us>=W )continue;
      if(visited[uf][us] || s[uf][us]=='#')continue;
      visited[uf][us]=true;
      dist[uf][us]=dist[cf][cs]+1;
      q.push({uf,us});
    }
  }
}

int main()
{
  int bnum=0;

  //入力とメモリ確保
  cin>>H>>W;
  s.resize(H);
  visited.resize(H);
  dist.resize(H);
  rep(i,H){
    s[i].resize(W);
    visited[i].assign(W,false);
    dist[i].assign(W,-1);
  }
  rep(i,H){
    rep(j,W){
      cin>>s[i][j];
      if(s[i][j]=='#')
        bnum++;
    }
  }

  bfs();

  if(dist[H-1][W-1]==-1)
    cout<<-1<<endl;
  else
    cout<<(H*W-bnum-dist[H-1][W-1]-1)<<endl;

  return 0;
}
