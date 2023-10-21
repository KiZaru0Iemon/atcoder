#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define rep2(i,s,e) for(int i=(int)(s);i<(int)(e);i++)
#define rrep(i,s) for(int i=(int)(s);i>=0;i--)
#define rrep2(i,s,e) for(int i=(int)(s);i>=(int)(e);i--)
#define all(x) (x).begin(),(x).end()
using ll=long long int;
using vb=basic_string<bool>;
using vvb=vector<vb>;
using P=pair<int,int>;
using vi=vector<char>;
using vvi=vector<vi>;

int H, W;
vvi S(1000,vector<char>(1000));
vvb visited(1000,basic_string<bool>(1000,false));
stack<P> sta;

int dfs(P s)
{
  int check=0;

  sta.push(s);
  while(sta.size()){
    P d=sta.top(); sta.pop();
    int df=d.first;
    int ds=d.second;
    if(!(0<=df && df<H && 0<=ds && ds<W))continue;
    if(visited[df][ds])continue;
    if(S[df][ds]!='#')continue;
    visited[df][ds]=true;
    check++;
    sta.push({df-1,ds-1});
    sta.push({df-1,ds+1});
    sta.push({df-1,ds});
    sta.push({df,ds-1});
    sta.push({df,ds+1});
    sta.push({df+1,ds-1});
    sta.push({df+1,ds+1});
    sta.push({df+1,ds});
  }

  return check;
}

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);

  cin>>H>>W;
  rep(i,H){
    rep(j,W){
      cin>>S[i][j];
    }}

  int ans=0;
  rep(i,H){
    rep(j,W){
      int temp=0;
      if(S[i][j]=='#'){
        temp = dfs({i,j});
      }
      if(temp>0)
        ans++;
    }
  }
  cout<<ans<<nl;
}
