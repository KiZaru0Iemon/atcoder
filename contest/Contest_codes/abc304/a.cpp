#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<string,int>;

int main()
{
  int N; cin>>N;
  vector<P> ps(N);
  int mini=INT_MAX;
  int st;
  rep(i,N){
    cin>>ps[i].first>>ps[i].second;
    if(mini>ps[i].second){
      mini=ps[i].second;
      st=i;
    }
  }

  for(int i=st;i<N;i++){
    cout<<ps[i].first<<endl;
  }
  for(int i=0;i<st;i++){
    cout<<ps[i].first<<endl;
  }

  return 0;
}
