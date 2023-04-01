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
vector<vector<int>> distance;

int bfs(P s, P g)
{
  queue<P> q;
}

int main()
{
  P s,g;
  cin>>R>>C;
  cin>>s.f>>s.s;
  cin>>g.f>>g.s;
  e.assign(R,{});
  visited.assign(R,{});
  distance.assign(R,{});
  rep(i,R){
    e[i].assign(C,0);
    visited[i].assign(C,0);
    distance[i].assign(C,0);
  }
  rep(i,R)
    rep(j,C)
      cin>>e[i][j];

  cout<<bfs(s,g)<<endl;

  return 0;
}

