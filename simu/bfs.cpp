#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int R,C;
P s;
P g;
vector<vector<char>> e;

int main()
{
  cin>>R>>C;
  cin>>s.f>>s.s;
  cin>>g.f>>g.s;
  e.assign(R,{});
  rep(i,R)
    e[i].assign(C,0);
  rep(i,R)
    rep(j,C)
      cin>>e[i][j];

  return 0;
}
