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
  int n; cin>>n;
  vector<int> t(n);
  rep(i,n)cin>>t[i];

  int sum1;
  int sum2;
  int min=INT_MAX;

  int loop=pow(2,n);
  rep(l,loop){
    sum1=sum2=0;
    rep(i,n){
      if(read_bit(l,i))sum1+=t[i];
      else sum2+=t[i];
    }
    sum1=max(sum1,sum2);
    if(min>sum1)min=sum1;
  }

  cout<<min<<endl;

  return 0;
}
