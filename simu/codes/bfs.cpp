#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int R,C;
vector<vector<char>> e;
vector<vector<char>> visited;
vector<vector<int>> dist;
int dire[][2]={{-1,0},{1,0},{0,-1},{0,1}};

void bfs(P s, P g)
{
  queue<P> q;

  visited[s.f][s.s]=(char)true;
  dist[s.f][s.s]=0;
  q.push(s);

  while(q.size()){
    P c=q.front(); q.pop();
    if(c.f==g.f && c.s==g.s)break;
    for(int i=0;i<4;i++){
      P u={c.f+dire[i][0],c.s+dire[i][1]};
      if(visited[u.f][u.s])continue;
      if(e[u.f][u.s]=='.'){
        visited[u.f][u.s]=(char)true;
        dist[u.f][u.s]=dist[c.f][c.s]+1;
        q.push(u);
      }
    }
  }
}

int main()
{
  P s,g;
  cin>>R>>C;
  cin>>s.f>>s.s;
  cin>>g.f>>g.s;
  s.f--; s.s--;
  g.f--; g.s--;
  e.assign(R,{});
  visited.assign(R,{});
  dist.assign(R,{});
  rep(i,R){
    e[i].assign(C,0);
    visited[i].assign(C,0);
    dist[i].assign(C,0);
  }
  rep(i,R)
    rep(j,C)
      cin>>e[i][j];

  bfs(s,g);

  cout<<dist[g.f][g.s]<<endl;

  return 0;
}

