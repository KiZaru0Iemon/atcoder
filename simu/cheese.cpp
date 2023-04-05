#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

vector<vector<char>> e;

int main()
{
  int H,W,N;
  cin>>H>>W>>N;

  e.assign(H,{});
  rep(i,H){
    e[i].assgin(W,0);
  }

  return 0;
}
