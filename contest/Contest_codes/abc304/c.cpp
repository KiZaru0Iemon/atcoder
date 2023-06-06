#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N,D;
vector<P> ltp;
vector<char> visited;
queue<int> nextp;

double e_norm(P a,P b)
{
  return sqrt(pow((a.first-b.first),2)+pow((a.second-b.second),2));
}

int main()
{
  cin>>N>>D;
  ltp.resize(N);
  visited.resize(N);
  rep(i,N)
    cin>>ltp[i].first>>ltp[i].second;

  visited[0]=true;
  for(int i=1;i<N;i++){
    if(e_norm(ltp[0],ltp[i]) <= (double)D){
      nextp.push(i);
    }
  }

  while(nextp.size()){
    int ps=nextp.front(); nextp.pop();
    if(visited[ps])continue;
    visited[ps]=true;

    rep(i,N){
      if( (ps!=i) && (e_norm(ltp[ps],ltp[i]) <= (double)D)){
        if(!visited[i])
          nextp.push(i);
      }
    }
  }

  rep(i,N)
    cout<<((visited[i])?"Yes":"No")<<endl;

  return 0;
}
