#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int H,W; cin>>H>>W;
  vector<string> S(H); rep(i,H)cin>>S[i];

  rep(i,H){
    int ser=0;
    rep(j,W){
      if(S[i][j]=='T'){
        ser++;
      } else {
        ser=0;
      }
      if(ser==2){
        S[i][j-1]='P';
        S[i][j]='C';
        ser=0;
      }
    }
    cout<<S[i]<<endl;
  }

  return 0;
}
