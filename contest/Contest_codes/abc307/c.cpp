#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define nl '\n'
using ll=long long int;
using P=pair<int,int>;

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);

  int ha,wa; cin>>ha>>wa;
  vector<string> A(ha);
  int anum=0;
  int axmax=-1,axmin=INT_MAX;
  int aymax=-1,aymin=INT_MAX;
  rep(i,ha){
    cin>>A[i];
    rep(j,A[i].size()){
      if(A[i][j]=='#'){
        anum++;
        axmax=max(axmax,i);
        aymax=max(aymax,j);
        axmin=min(axmin,i);
        aymin=min(aymin,j);
      }
    }
  }
  int htA=axmax-axmin+1,wtA=aymax-aymin+1;
  vector<vector<char>> tA(htA,vector<char>(wtA));
  rep(i,htA){
    rep(j,wtA){
      tA[i][j]=A[axmin+i][aymin+j];
    }
  }

  int hb,wb; cin>>hb>>wb;
  vector<string> B(hb);
  int bnum=0;
  int bxmax=-1,bxmin=INT_MAX;
  int bymax=-1,bymin=INT_MAX;
  rep(i,hb){
    cin>>B[i];
    rep(j,B[i].size()){
      if(B[i][j]=='#'){
        bnum++;
        bxmax=max(bxmax,i);
        bymax=max(bymax,j);
        bxmin=min(bxmin,i);
        bymin=min(bymin,j);
      }
    }
  }
  int htB=bxmax-bxmin+1,wtB=bymax-bymin+1;
  vector<vector<char>> tB(htB,vector<char>(wtB));
  rep(i,htB){
    rep(j,wtB){
      tB[i][j]=B[bxmin+i][bymin+j];
    }
  }

  int hx,wx; cin>>hx>>wx;
  vector<string> X(hx);
  int xnum=0;
  rep(i,hx){
    cin>>X[i];
    rep(j,X[i].size())
      if(X[i][j]=='#')
        xnum++;
  }

  if(xnum < max(anum,bnum)){
    cout<<"No"<<nl;
    return 0;
  }

  vector<vector<char>> C(hx,vector<char>(wx,'.'));

  rep(ai,hx-htA+1){
    rep(aj,wx-wtA+1){
      rep(bi,hx-htB+1){
        rep(bj,wx-wtB+1){
          //
          rep(i,hx)
            rep(j,wx)
              C[i][j]='.';
          rep(i,htA){
            rep(j,wtA){
              C[ai+i][aj+j]=tA[i][j];
            }
          }
          rep(i,htB){
            rep(j,wtB){
              if(C[bi+i][bj+j]=='.')
                C[bi+i][bj+j]=tB[i][j];
            }
          }
          bool jud=true;
          rep(i,hx){
            rep(j,wx){
              if(X[i][j]!=C[i][j])
                jud=false;
            }
          }
          if(jud){
            cout<<"Yes"<<nl;
            return 0;
          }
          //
        }
      }
    }
  }
  cout<<"No"<<nl;
}
