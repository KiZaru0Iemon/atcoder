#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int H,W;
vector<vector<char>> C;
vector<vector<char>> visited;
vector<vector<int>> dist;
int dire[][2]={{1,1},{1,-1},{-1,1},{-1,-1}};

int bfs(P s)
{
  queue<P> q;
  int sf=s.first;
  int ss=s.second;
  visited[sf][ss]=true;
  dist[sf][ss]=0;
  q.push(s);

  int maxi=0;

  while(q.size()){
    P c=q.front(); q.pop();
    int cf=c.first;
    int cs=c.second;

    rep(i,4){
      int uf=cf+dire[i][0];
      int us=cs+dire[i][1];
      P u={uf,us};
      if(uf<0 || uf>=H || us<0 || us>=W)continue;
      if(visited[uf][us] || C[uf][us]=='.')continue;
      dist[uf][us]=dist[cf][cs]+1;
      visited[uf][us]=true;
      maxi=max(maxi,dist[uf][us]);
      q.push(u);
    }
  }

  return (maxi/2)-1;
}

int main()
{
  cin>>H>>W;
  C.resize(H);
  visited.resize(H);
  dist.resize(H);
  rep(i,H){
    C[i].resize(W);
    visited[i].assign(W,false);
    dist[i].assign(W,-1);
  }
  rep(i,H)rep(j,W)cin>>C[i][j];

  int N=min(H,W);
  vector<int> ans(N,0);

  rep(i,H){
    rep(j,W){
      if(C[i][j]=='#' && visited[i][j]==false){
        ans[bfs({i,j})]++;
      }
    }
  }

  rep(i,N)
    cout<<ans[i]<<" ";
  cout<<endl;

  return 0;
}
