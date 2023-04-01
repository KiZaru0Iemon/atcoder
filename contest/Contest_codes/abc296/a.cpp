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
  string S; cin>>S;
  int pre=S[0];
  for(int i=1;i<(int)S.size();i++){
    if(pre==S[i]){
      cout<<"No"<<endl;
      return 0;
    }
    pre=S[i];
  }
  cout<<"Yes"<<endl;

  return 0;
}
