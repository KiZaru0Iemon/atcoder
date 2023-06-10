#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  if(N%5 < 3){
    N-=(N%5);
  }else{
    N+=(5-N%5);
  }
  cout<<N<<endl;

  return 0;
}
