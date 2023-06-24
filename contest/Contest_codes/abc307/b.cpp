#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define nl '\n'
using ll=long long int;
using P=pair<int,int>;

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);
  int N; cin>>N;
  vector<string> S(N);
  rep(i,N)cin>>S[i];

  rep(i,N){
    rep(j,N){
      if(i!=j){
        bool jud=true;
        string t=S[i]+S[j];
        int s=0,e=t.size()-1;
        while(s<=e){
          if(t[s]!=t[e]){
            jud=false;
            break;
          }
          s++;
          e--;
        }
        if(jud){
          cout<<"Yes"<<nl;
          return 0;
        }
      }
    }
  }
  cout<<"No"<<nl;
}
