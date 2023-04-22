#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

const vector<int> coin={500,100,50,10,5,1};

int main()
{
  int change; cin>>change;
  change=1000-change;

  int ci=0;
  int num=0;

  while(change>0) {
    if(change/coin[ci]){
      num+=change/coin[ci];
      change%=coin[ci];
    }
    ci++;
  }

  cout<<num<<endl;

  return 0;
}
