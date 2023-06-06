#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int W,H,N;
  cin>>W>>H>>N;
  vector<P> sb(N);
  rep(i,N)cin>>sb[i].first>>sb[i].second;

  int A;
  cin>>A;
  vector<int> a(A+1);
  rep(i,A)cin>>a[i];
  a[A]=W;

  int B;
  cin>>B;
  vector<int> b(B+1);
  rep(i,B)cin>>b[i];
  b[B]=H;

  map<P,int> erea;

  rep(i,N){
    vector<int>::iterator itx,ity;
    itx=lower_bound(a.begin(),a.end(),sb[i].first);
    ity=lower_bound(b.begin(),b.end(),sb[i].second);

    int ix,iy;
    ix=itx-a.begin();
    iy=ity-b.begin();

    P ii={ix,iy};
    if(erea.count(ii)){
      erea[ii]++;
    }else{
      erea[ii]=1;
    }
  }

  int m=INT_MAX,M=-1;
  for(auto [pi,num] : erea){
    m=min(m,num);
    M=max(M,num);
  }
  if((ll)erea.size() < (ll)(A+1)*(B+1)){
    m=0;
  }

  cout<<m<<" "<<M<<endl;

  return 0;
}
