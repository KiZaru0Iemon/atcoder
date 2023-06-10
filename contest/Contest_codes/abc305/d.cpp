#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  vector<int> A(N);
  vector<int> sumA(N);
  cin>>A[0];
  sumA[0]=0;
  for(int i=1;i<N;i++){
    cin>>A[i];
    if(i&1){
      sumA[i]=sumA[i-1];
    }else{
      sumA[i]=sumA[i-1]+(A[i]-A[i-1]);
    }
  }

  int Q; cin>>Q;
  vector<int> l(Q),r(Q);
  rep(i,Q) cin>>l[i]>>r[i];

  rep(i,Q){
    vector<int>::iterator st,en;
    int si,ei;
    st=lower_bound(A.begin(),A.end(),l[i]);
    en=lower_bound(A.begin(),A.end(),r[i]);
    si=st-A.begin();
    ei=en-A.begin();

    int slt=sumA[ei]-sumA[si];

    if( (l[i]!=A[si]) && !(si&1) ){
      slt+=(A[si]-l[i]);
    }

    if( (r[i]!=A[ei]) && !(ei&1) ){
      slt-=(A[ei]-r[i]);
    }

    cout<<slt<<endl;
  }

  return 0;
}
