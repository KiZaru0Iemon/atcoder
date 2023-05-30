#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

string dirC="RLUD";
int dir[][2]={
  {1,0},
  {-1,0},
  {0,1},
  {0,-1},
};

int main()
{
  int N,M,H,K;
  cin>>N>>M>>H>>K;
  string S;
  cin>>S;
  vector<vector<int>> hr(M,vector<int>(3,true));
  rep(i,M)cin>>hr[i][0]>>hr[i][1];

  sort(hr.begin(),hr.end());

  P pt={0,0};

  rep(i,N){

    rep(j,4){
      if(S[i]==dirC[j]){
        pt.first+=dir[j][0];
        pt.second+=dir[j][1];
      }
    }
    H--;

    if(H<=-1)break;

    if(binary_search(hr.begin(),hr.end(),vector<int>{pt.first,pt.second,true})){
      if(H<K){
        H=K;

        vector<vector<int>>::iterator pos=lower_bound(hr.begin(),hr.end(),vector<int>{pt.first,pt.second,true});
        (*pos)[2]=false;

      }
    }
  }

  cout<<((H<=-1)?"No":"Yes")<<endl;

  return 0;
}
