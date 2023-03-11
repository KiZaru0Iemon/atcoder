#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

char *e; //エリア情報
vector<int> *adj; //隣接リスト
bool *visited; //訪問の有無
bool goal;

//深さ優先探索
void dfs(int s)
{
  if(visited[s]) return;
  visited[s]=true;
  if(e[s]=='g'){
    goal=true;
    return;
  }
  for(auto u: adj[s]){
    dfs(u);
  }
}

int main()
{
  int H,W; cin>>H>>W;
  e = new char[H*W];
  adj = new vector<int>[H*W];
  visited = new bool[H*W];

  //隣接リストの作成
  rep(i,H){
    rep(j,W){
      int now=i*W+j;
      cin>>e[now];
      if(e[now]!='#'){
        if(now-W >= 0)   adj[now].push_back(now-W); //top
        if(now+W <  H*W) adj[now].push_back(now+W); //bottom
        if(now   >  i*W)       adj[now].push_back(now-1); //left
        if(now   <  (i+1)*W-1) adj[now].push_back(now+1); //right
      }
    }
  }

  //深さ優先探索からgに行けるか確認
  rep(i,H*W){
    if(e[i]=='s'){
      dfs(i);
      break;
    }
  }

  cout<<((goal)?"Yes":"No")<<endl;

  return 0;
}
