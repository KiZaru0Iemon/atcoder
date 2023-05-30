#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  ll A,B; cin>>A>>B;
  cout<<(A/B)+((A%B>0)?1:0)<<endl;

  return 0;
}
