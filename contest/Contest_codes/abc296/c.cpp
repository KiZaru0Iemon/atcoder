#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

bool binaryS(int a, int b, vector<int>& arr, int x)
{
  while(a <= b) {
    int k = (a+b)/2;
    if(arr[k] == x){
      return true;
    }
    if(arr[k]>x)b=k-1;
    else a=k+1;
  }
  return false;
}

int main()
{
  int N,X; cin>>N>>X;
  X=abs(X);
  vector<int> data;
  rep(i,N){
    int tmp; cin>>tmp;
    data.push_back(tmp);
  }
  sort(data.begin(),data.end());

  bool res=false;
  rep(i,N){
    res=binaryS(i,N-1,data,data[i]+X);
    if(res)break;
  }

  cout<<((res)?"Yes":"No")<<endl;

  return 0;
}
