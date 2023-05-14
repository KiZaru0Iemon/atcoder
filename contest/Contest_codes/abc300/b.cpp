#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

void shift_c(vector<vector<char>>& M, int h, int w) {
  vector<vector<char>> tmp=M;
  rep(i,h){
    rep(j,w){
      if(i==h-1)
        M[i][j]=tmp[0][j];
      else
        M[i][j]=tmp[i+1][j];
    }
  }
}

void shift_r(vector<vector<char>>& M, int h, int w) {
  vector<vector<char>> tmp=M;
  rep(i,h){
    rep(j,w){
      if(j==w-1)
        M[i][j]=tmp[i][0];
      else
        M[i][j]=tmp[i][j+1];
    }
  }
}

int main()
{
  int H,W; cin>>H>>W;
  vector<vector<char>> A(H,vector<char>(W));
  vector<vector<char>> B(H,vector<char>(W));
  rep(i,H)rep(j,W)cin>>A[i][j];
  rep(i,H)rep(j,W)cin>>B[i][j];

  rep(i,H){
    rep(j,W){
      if(A==B){
        cout<<"Yes"<<endl;
        return 0;
      }

      shift_r(A,H,W);
    }
    shift_c(A,H,W);
  }

  cout<<"No"<<endl;

  return 0;
}
