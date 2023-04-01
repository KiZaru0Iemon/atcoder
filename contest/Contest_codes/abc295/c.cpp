#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;
 
int main()
{
  int N;
  cin>>N;
  vector<int> A(N);
  rep(i,N)
    cin>>A[i];
  sort(A.begin(),A.end());
 
  int count=0;
  int i=0;
  while(i<N){
    int pre=A[i];
    int num=0;
    while(pre==A[i]){
      i++;
      num++;
    }
    count+=(num/2);
  }
 
  cout<<count<<endl;
 
  return 0;
}
