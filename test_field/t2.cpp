#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;

template<typename T1, typename T2>
class myp : public std::pair<T1,T2> {
public:
  using std::pair<T1,T2>::pair;

  myp() :
    std::pair<T1,T2>::pair(),
    f(this->first),
    s(this->second)
  {}

  myp(T1 v1, T2 v2) :
    std::pair<T1,T2>::pair(),
    f(this->first),
    s(this->second)
  {
    this->first=v1;
    this->second=v2;
  }

  T1 &f;
  T2 &s;
};

using P=myp<int,int>;

int main()
{
  int N=30;
  vector<P> arr;
  arr.assign(N,{0,0});

  rep(i,N){
    cout<<arr[i].f<<" "<<arr[i].s<<endl;
  }

  return 0;
}
