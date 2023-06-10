#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  char p,q; cin>>p>>q;
  int d[]={3,1,4,1,5,9};
  int tp=p-'A';
  int tq=q-'A';
  int ip=min(tp,tq);
  int iq=max(tp,tq);

  int sum=0;
  for(int i=ip;i<iq;i++){
    sum+=d[i];
  }
  cout<<sum<<endl;

  return 0;
}
