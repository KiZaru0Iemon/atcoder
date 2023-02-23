#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  int sell=0;
  bool hand[N+2]={0};

  int tmp;
  int now=1;
  int end=N;

  rep(i,N){
    cin>>tmp;
    if(tmp>N)
      sell++;
    else if(hand[tmp])
      sell++;
    else{
      hand[tmp]=true;
    }
  }

  while(1){
    if(now>end)break;
    while(hand[now])
      now++;

    if(sell>=2){
      sell-=2;
      hand[now]=true;
      now++;
    }
    else{
      while((end!=0) && !hand[end])
        end--;
      if(now<=end){
        sell++;
        hand[end]=false;
        end--;
      }
    }
  }

  cout<<now-1<<endl;
}
