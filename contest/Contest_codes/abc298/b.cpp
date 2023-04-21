#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N;
vector<vector<char>> A;
vector<vector<char>> B;

void circle()
{
  vector<vector<char>> C(N,vector<char>(N));
  rep(i,N){
    rep(j,N){
      C[N-j-1][i]=A[i][j];
    }
  }
  rep(i,N){
    rep(j,N){
      A[i][j]=C[i][j];
    }
  }
}

bool hante()
{
  bool tf=true;
  rep(i,N){
    rep(j,N){
      if((A[i][j]=='1') && (B[i][j]=='0')){
        tf=false;
        return tf;
      }
    }
  }
  return tf;
}

int main()
{
  cin>>N;
  A.resize(N);
  B.resize(N);
  rep(i,N){
    A[i].resize(N);
    B[i].resize(N);
  }

  rep(i,N)rep(j,N)cin>>A[i][j];
  rep(i,N)rep(j,N)cin>>B[i][j];

  int cl=0;
  if(hante()){
    cl++;
  }
  rep(i,3){
    circle();
    if(hante()){
      cl++;
    }
  }
  if(cl)
    cout<<"Yes"<<endl;
  else 
    cout<<"No"<<endl;

  return 0;
}
