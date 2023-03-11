#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

const int R=10;
const int C=10;
bool e[R][C];
bool visited[R][C];
stack<P> stacke;
bool can; 
int counter;

void dfs(P s)
{
  int check=0;

  stacke.push(s);
  while(stacke.size()){
    P d=stacke.top(); stacke.pop();
    int df=d.first;
    int ds=d.second;
    if(!visited[df][ds]){
      visited[df][ds]=true;
      if(df-1>=0 && e[df-1][ds])stacke.push((P){df-1,ds}); //t
      if(df+1< R && e[df+1][ds])stacke.push((P){df+1,ds}); //b
      if(ds-1>=0 && e[df][ds-1])stacke.push((P){df,ds-1}); //l
      if(ds+1< C && e[df][ds+1])stacke.push((P){df,ds+1}); //r
    }
  }

  //島の大きさから島が１つかを確認
  rep(i,R)
    rep(j,C)
      if(visited[i][j])check++;
  if(check==counter)can=true;

  //訪問済配列をリセット
  rep(i,R)rep(j,C)visited[i][j]=false;
}

int main()
{
  P end;
  rep(i,R){
    rep(j,C){
      char tmp; cin>>tmp;
      if(tmp=='o'){
        end.first=i; end.second=j; e[i][j]=true;
        counter++;
      }
    }
  }

  dfs(end);
  if(can){
    cout<<"YES"<<endl;
    return 0;
  }

  counter++;
  rep(i,R){
    rep(j,C){
      if(!e[i][j]){
        e[i][j]=true;
        dfs((P){i,j});
        e[i][j]=false;
        if(can)break;
      }
    }
    if(can)break;
  }

  cout<<((can)?"YES":"NO")<<endl;

  return 0;
}

