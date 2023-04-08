/* bit全探索 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

bool read_bit(int num, int suffix)
{
  return ((num>>suffix)&1)?true:false;
}

int main()
{
  int n,m; cin>>n>>m;
  vector<P> p(m); rep(i,m)cin>>p[i].first>>p[i].second;

  int loop=pow(2,n);
  int num;
  vector<int> group;
  vector<P> pairs;
  int check;
  int habatu=1;

  //派閥になりたい議員の組み合わせ
  for(int i=1;i<loop;i++){
    num=0;
    group.clear();
    pairs.clear();

    rep(j,n){
      if(read_bit(i,j)){
        group.push_back(j+1);
        num++;
      }
    }
    if(num==1)continue;
    rep(j,num){
      rep(k,num){
        if(j<k){
          pairs.push_back(P(group[j],group[k]));
        }
      }
    }
    check=pairs.size();
    rep(j,m){
      rep(k,pairs.size()){
        if(p[j]==pairs[k])
          check--;
      }
    }
    if(!check && habatu<num)
      habatu=num;
  }

  cout<<habatu<<endl;

  return 0;
}
