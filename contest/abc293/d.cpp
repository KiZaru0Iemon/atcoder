#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;
using Pic=pair<int,char>;

int N,M;
pair<Pic,Pic> *himo;
bool *visited;

int main()
{
  cin>>N>>M;
  himo=new pair<Pic,Pic>[N+1];
  visited=new bool[N+1];

  rep(i,M){
    int A,C; char B,D;
    cin>>A>>B>>C>>D;
    if(B=='R')himo[A].first=(Pic){C,D};
    if(B=='R')himo[A].first=(Pic){C,D};
  }

  return 0;
}
