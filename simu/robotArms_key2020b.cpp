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
    X[i].first=()l-r;
    X[i].second=l+r;
  }

  return 0;
}
