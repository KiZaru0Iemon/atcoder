#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int main()
{
  ll N,M; cin>>N>>M;
  ll X=LONG_MAX;
  ll low=(ll)sqrt(M);
  ll high=low+1;

  if(N>=M){
    cout<<M<<endl;
    return 0;
  }

  ll a,b;
  for(a=1;a<=high;a++){
    b=M/a+((M%a)?1:0);
    if(a<=N && b<=N && a*b>=M)
      X=min(a*b,X);
  }

  cout<<((X==LONG_MAX)?-1:X)<<endl;

  return 0;
}
