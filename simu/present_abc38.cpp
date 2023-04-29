#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  vector<P> box(N);
  rep(i,N) cin>>box[i].first>>box[i].second;

  int num=0;

  sort(box.begin(),box.end());
  //LISで個数を調べる
  //箱の大きさかぶりをなくす
  //縦基準の最大入れ子がわかる

  //横基準も同様に行って、大きい方が解
  sort(box.begin(),box.end(),[](P a, P b){
      if(a.second != b.second)
        return a.second < b.second;
      else
        return a.first < b.first;
  });

  cout<<num<<endl;

  return 0;
}

  //cout<<endl;
  //rep(i,N)
  //  cout<<box[i].first<<" "<<box[i].second<<endl;
