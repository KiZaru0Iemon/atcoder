#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int main()
{
  int H,W; cin>>H>>W;
  vector<vector<int>> A(H,vector<int>(W));
  rep(i,H)
    rep(j,W)
      cin>>A[i][j];

  rep(i,H){
    rep(j,W){
      if(!A[i][j])
        cout<<".";
      else
        cout<<(char)('A'+A[i][j]-1);
    }
    cout<<endl;
  }

  return 0;
}
