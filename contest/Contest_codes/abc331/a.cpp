#pragma GCC optimize("O2")
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
  int M,D; cin>>M>>D;
  int y,m,d; cin>>y>>m>>d;
  if(d+1<=D)
    cout<<y<<" "<<m<<" "<<d+1<<nl;
  else if(m+1<=M)
    cout<<y<<" "<<m+1<<" "<<1<<nl;
  else
    cout<<y+1<<" "<<1<<" "<<1<<nl;
}
