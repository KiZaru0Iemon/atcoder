#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

bool read_bit(int num, int suffix)
{
  return ((num>>suffix)&1)?true:false;
}

//問題番号、解く問題数、最大問題数、完璧スコア
int problem_score(int pnum, int snum, int p, int c)
{
  if(p!=snum)c=0;
  return pnum*100*snum+c;
}

int main()
{
  int D; cin>>D;
  ll G; cin>>G;
  vector<int> p(D),c(D);
  rep(i,D)cin>>p[i]>>c[i];

  int mini=INT_MAX;
  int loop=pow(2,D);
  int numSum;
  ll scoreSum;
  vector<int> tuning;

  //各同点問題を全問解くかでbit全探索
  rep(i,loop){
    numSum=scoreSum=0;
    tuning.clear();

    rep(j,D){
      if(read_bit(i,j)){
        numSum+=p[j];
        scoreSum+=ll(problem_score(j+1,p[j],p[j],c[j]));
      }else{
        tuning.push_back(j);
      }
    }

    if(scoreSum >= G){
      mini=min(mini,numSum);
    }else{
      //全問解いてもGに達しない場合はコンプボーナスつかない程度に全探索
      for(int j=tuning.size()-1;j>=0;j--){
        for(int k=p[tuning[j]]-1;k>0;k--){
          numSum++;
          scoreSum+=(tuning[j]+1)*100;
          if(scoreSum >= G){
            mini=min(mini,numSum);
            break;
          }
        }
        if(scoreSum >= G)break;
      }
    }
  }

  cout<<mini<<endl;

  return 0;
}
