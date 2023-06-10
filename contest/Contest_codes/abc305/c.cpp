#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int H,W; cin>>H>>W;
  vector<string> S(H); rep(i,H)cin>>S[i];

  int cmax=0;
  rep(i,H){
    int ck=0;
    rep(j,W){
      if(S[i][j]=='#')
        ck++;
    }
    cmax=max(cmax,ck);
  }

  int cjmax=0;
  rep(j,W){
    int ck=0;
    rep(i,H){
      if(S[i][j]=='#')
        ck++;
    }
    cjmax=max(cjmax,ck);
  }

  int ai;
  rep(i,H){
    int ck=0;
    rep(j,W){
      if(S[i][j]=='#')
        ck++;
    }
    if(ck!=0 && cmax>ck){
      ai=i; break;
    }
  }

  int aj;
  rep(j,W){
    int ck=0;
    rep(i,H){
      if(S[i][j]=='#')
        ck++;
    }
    if(ck!=0 && cjmax>ck){
      aj=j; break;
    }
  }

  cout<<(ai+1)<<" "<<(aj+1)<<endl;

  return 0;
}
