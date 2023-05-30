#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

string word="snuke";
int dire[][2]={{-1,-1},{1,-1},{-1,1},{1,1},{0,1},{1,0},{0,-1},{-1,0}};

int main()
{
  int H,W; 
  cin>>H>>W;
  vector<string> S(H);
  rep(i,H)cin>>S[i];

  rep(i,H){
    rep(j,W){

      //if(S[i][j]==word[0]){
        rep(k,8){
          int l,si=i,sj=j;
          for(l=0;l<(int)word.size();l++){
            if(S[si][sj]==word[l]){
              if(0<=si+dire[k][0] && si+dire[k][0]<H && 0<=sj+dire[k][1] && sj+dire[k][1]<W){
                si+=dire[k][0]; sj+=dire[k][1];
              }
            }else{
              break;
            }
          }
          si=i; sj=j;
          if(l==(int)word.size()){
            rep(q,word.size()){
              cout<<si+1<<" "<<sj+1<<endl;
              si+=dire[k][0]; sj+=dire[k][1];
            }
          }
        }
      //}

    }
  }

  return 0;
}
