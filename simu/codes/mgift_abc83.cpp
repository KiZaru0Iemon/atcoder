#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  ll X,Y; cin>>X>>Y;
  ll now=X;
  ll num=0;

  while(now<=Y){
    num++;
    now*=2;
  }

  cout<<num<<endl;

  return 0;
}
