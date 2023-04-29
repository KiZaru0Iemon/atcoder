#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N;
  cin>>N;
  vector<P> X(N);
  rep(i,N){
    int l,r;
    cin>>l>>r;
    X[i].first=(l-r>0)?l-r:0;
    X[i].second=l+r;
  }

  sort(X.begin(),X.end(),[](P a,P b){
      if(a.second!=b.second)
        return a.second < b.second;
      else
        return a.first < b.first;
  });

  int num=0;
  int start=0;

  rep(i,N){
    if(start<=X[i].first){
      start=X[i].second;
      num++;
    }
  }

  cout<<num<<endl;

  return 0;
}
