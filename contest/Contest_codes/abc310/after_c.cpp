#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define rep(i,e) for(int i=0;i<(int)(e);i++)
#define rep2(i,s,e) for(int i=(int)(s);i<(int)(e);i++)
#define rrep(i,s) for(int i=(int)(s);i>=0;i--)
#define rrep2(i,s,e) for(int i=(int)(s);i>=(int)(e);i--)
#define all(x) (x).begin(),(x).end()
using ll=long long int;
using vb=basic_string<bool>;
using vvb=vector<vb>;
using P=pair<int,int>;
using vi=vector<int>;
using vvi=vector<vi>;

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);

  int N; cin>>N;
  set<string> st;
  rep(i,N){
    string t; cin>>t;
    string rt=t;
    reverse(all(rt));
    st.insert(t);
    st.insert(rt);
  }
  int num1=0,num2=0;
  for(auto u:st){
    string ru=u;
    reverse(all(ru));
    if(u==ru)num1++;
    else num2++;
  }
  cout<<(num1+num2/2)<<nl;
}
