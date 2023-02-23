#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

P around(P p,int vec)
{
  switch(vec){
    case 0: p.first--; p.second--; break;
    case 1: p.first--; break;
    case 2: p.second--; break;
    case 3: p.second++; break;
    case 4: p.first++; break;
    case 5: p.first++; p.second++; break;
  }
  return p;
}

int main()
{
  int N; cin>>N;
  vector<P> bf(N);
  for(int i=0;i<N;i++)
    cin>>bf[i].first>>bf[i].second;

  map<P,int> gn;
  int c=1;
  int d;

  rep(i,N)gn[bf[i]]=i;
  rep(i,N){
    rep(j,6){
      if(gn.count(around(bf[i],j))){
        d=gn[around(bf[i],j)];
        for(auto k=gn.begin();k!=gn.end();k++){
          if(k->second==d)
            gn[k->first]=gn[bf[i]];
        }
      }
    }
  }

  vector<int> counter;
  bool flag;
  for(auto k=gn.begin();k!=gn.end();k++){
    flag=false;
    rep(i,counter.size()){
      if(counter[i]==k->second){
        flag=true;
        break;
      }
    }
    if(!flag)
      counter.push_back(k->second);
  }
  cout<<counter.size()<<endl;
}
