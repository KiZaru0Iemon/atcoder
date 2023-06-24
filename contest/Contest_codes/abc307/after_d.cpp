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
  vector<char> S(N);
  vector<int> Sl(N,-1);
  vector<int> lst(N);

  int l=0;
  rep(i,N){
    char t; cin>>t;
    if(t=='('){
      l++;
      S[i]=t;
      Sl[i]=l;
      lst[l]=i;
    }
    else if(t==')'){
      S[i]=t;
      Sl[i]=l;
      l=(l-1<0)?0:(l-1);
    }
    else {
      S[i]=t;
      Sl[i]=l;
    }
  }

  rep(i,N){
    if(Sl[i]<=l && lst[Sl[i]]<=i)
      cout<<S[i];
  }
  cout<<nl;
}
