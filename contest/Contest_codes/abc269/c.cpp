#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int bitnum(ll n){
  int c=0;
  while(n!=0){
    if(n&1)c++;
    n>>=1;
  }
  return c;
}

int main()
{
  ll N; cin>>N;
  int bitn=bitnum(N);
  int loop=pow(2,bitn);
  vector<int> ones(bitn,0);
  ll o=0;

  int j=0;
  for(int i=0;i<61;i++){
    if((N>>i)&1){
      ones[j]=i;
      j++;
    }
  }

  ll d;
  ll d2;
  for(int i=0;i<loop;i++){
    d=bitn-1;
    o=0;
    for(int j=bitn-1;j>=0;j--){
      d2=0;
      d2+=(((i>>d)&1)?1:0);
      d2<<=ones[j];
      o+=d2;
      d--;
    }
    cout<<o<<endl;
  }
}
