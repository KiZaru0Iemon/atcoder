#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int main()
{
  int R,C; cin>>R>>C;
  vector<vector<char>> B(R,vector<char>(C));
  vector<vector<char>> A(R,vector<char>(C));
  rep(i,R)
    rep(j,C){
      cin>>B[i][j];
      A[i][j]=B[i][j];
    }

  rep(i,R){
    rep(j,C){
      char tmp=B[i][j]-'0';
      if(tmp>0 && tmp<10){
        for(int k=i-tmp;k<=i+tmp;k++){
          for(int l=j-tmp;l<=j+tmp;l++){
            int dis=abs(i-k)+abs(j-l);
            if((k>=0 && k<R && l>=0 && l<C) && (dis>=0 && dis<=tmp)){
              A[k][l]='.';
            }
          }
        }
      }
    }
  }

  rep(i,R){
    rep(j,C)
      cout<<A[i][j];
    cout<<endl;
  }


  return 0;
}
