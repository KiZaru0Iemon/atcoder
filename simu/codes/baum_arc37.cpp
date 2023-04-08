#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N,M;
vector<int> *adj; //隣接リスト
bool *visited;
int num; //木の個数

bool dfs(int s)
{
  bool is_tree=true;
  stack<P> se;
  se.push((P){s,-1});

  while(se.size()){
    P dp=se.top(); se.pop();
    int d=dp.first;
    int pre=dp.second;
    visited[d]=true;

    for(auto u : adj[d]){
      if(visited[u]){
        if(u!=pre)is_tree=false;
        continue;
      }
      se.push((P){u,d});
    }
  }

  return is_tree;
}

int main()
{
  cin>>N>>M;
  adj=new vector<int>[N];
  visited=new bool[N];

  //隣接リスト作成
  rep(i,M){
    int f,s; cin>>f>>s;
    f--; s--;
    adj[f].push_back(s);
    adj[s].push_back(f);
  }

  int i=0;
  while(i<N){
    while(visited[i])i++;
    if(i>=N)break;
    if(dfs(i))num++;
  }

  cout<<num<<endl;

  return 0;
}
