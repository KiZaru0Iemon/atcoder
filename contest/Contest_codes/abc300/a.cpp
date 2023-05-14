#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  int A,B; cin>>A>>B;
  vector<int> C(N);
  rep(i,N)cin>>C[i];
  rep(i,N){
    if(C[i]==(A+B)){
      cout<<(i+1)<<endl;
      break;
    }
  }

  return 0;
}
