#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;

  if(N<1000) {
    cout<<N<<endl;
    return 0;
  }

  rep(i,6){
    if((int)pow(10,i+3)<=N && N<(int)pow(10,i+4)) {
      N/=(int)pow(10,i+1);
      N*=(int)pow(10,i+1);
      cout<<N<<endl;
      return 0;
    }
  }

  return 0;
}
