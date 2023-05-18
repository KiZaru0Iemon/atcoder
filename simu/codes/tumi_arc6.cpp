#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  vector<int> tower={INT_MAX};
  rep(i,N){
    int t; cin>>t;
    int j;
    for(j=0;j<(int)tower.size();j++){
      if(t<=tower[j]){
        tower[j]=t;
        break;
      }
    }
    if(j==(int)tower.size()){
      tower.push_back(t);
    }
  }

  cout<<tower.size()<<endl;

  return 0;
}
