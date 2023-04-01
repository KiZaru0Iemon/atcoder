#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

bool read_bit(int num, int suffix)
{
  return ((num>>suffix)&1)?true:false;
}

bool num_check(int num, int H, int W)
{
  int c=0;
  rep(i,H+W-2){
    if(read_bit(num,i))c++;
  }
  return (c==H-1)?true:false;
}

int main()
{
  int H,W; cin>>H>>W;
  int A[H][W];
  int num=0;

  rep(i,H)
    rep(j,W)
      cin>>A[i][j];

  int loop=pow(2,(H+W-2));
  vector<int> box;
  P now;

  rep(i,loop){
    if(!num_check(i,H,W))continue;
    now=(P){0,0};
    box.clear();
    box.push_back(A[now.first][now.second]);

    rep(j,H+W-2){
      if(read_bit(i,j))
        now.first++;
      else
        now.second++;
      box.push_back(A[now.first][now.second]);
    }

    sort(box.begin(),box.end());
    int tmp=-1;
    int j;
    for(j=0;j<box.size();j++){
      if(tmp==box[j])break;
      tmp=box[j];
    }
    if(j==box.size())num++;
  }

  cout<<num<<endl;

  return 0;
}
