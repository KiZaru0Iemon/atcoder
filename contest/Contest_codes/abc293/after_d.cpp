#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int N,M;
vector<vector<int>> rope;
bool *visited;

bool dfs(int s)
{
  stack<P> se;
  se.push((P){s,-1});
  visited[s]=true;

  while(se.size()){
    P tmp=se.top(); se.pop();
    for(auto u : rope[tmp.f]){
      if(u==tmp.s)
        continue;
      else if(visited[u])
        return true;
      visited[u]=true;
      se.push((P){u,tmp.f});
    }
  }
  return false;
}

int main()
{
  cin>>N>>M;
  rope.assign(N,(vector<int>){});
  visited=new bool[N];
  rep(i,N)visited[i]=false;

  rep(i,M){
    int ti1,ti2; char tc1,tc2; cin>>ti1>>tc1>>ti2>>tc2;
    ti1--; ti2--;
    rope[ti1].push_back(ti2);
    rope[ti2].push_back(ti1);
  }

  int i=0;
  int pole=0,circle=0;

  while(i<N){
    if(dfs(i))circle++;
    else pole++;
    while(i<N && visited[i])i++;
  }

  cout<<circle<<" "<<pole<<endl;

  return 0;
}
