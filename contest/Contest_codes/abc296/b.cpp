#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int main()
{
  string S[8];
  rep(i,8)
    cin>>S[i];

  rep(i,8){
    rep(j,8){
      if(S[i][j]=='*'){
        cout<<(char)('a'+j);
        cout<<(char)('8'-i)<<endl;
        return 0;
      }
    }
  }

  return 0;
}
