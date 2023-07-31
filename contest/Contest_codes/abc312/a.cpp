#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
using vi=vector<int>;
using vvi=vector<vi>;

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);
  vector<string> S={"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
  string T; cin>>T;
  for(auto u:S){
    if(u==T){
      cout<<"Yes"<<nl;
      return 0;
    }
  }
  cout<<"No"<<nl;
}
