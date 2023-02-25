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
  vector<int> p(D+1),c(D+1);
  for(int i=1;i<D+1;i++)cin>>p[i]>>c[i];

  int loop=pow(2,D);
  rep(i,loop){
    rep(j,D){
      if(read_bit(i,j)){
      }
    }
  }

  return 0;
}
