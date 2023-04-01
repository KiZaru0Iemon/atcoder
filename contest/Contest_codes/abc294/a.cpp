#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int main()
{
  int N; cin>>N;
  rep(i,N){
    int tmp; cin>>tmp;
    if(!(tmp&1))cout<<tmp<<" ";
  }
  cout<<endl;

  return 0;
}
