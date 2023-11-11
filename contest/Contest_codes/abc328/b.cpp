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
  cin.tie(nullptr)->sync_with_stdio(false);
  int N; cin>>N;

  int ans=0;
  rep(i,N){
    int m=i+1;
    int d; cin>>d;
    for(int j=1;j<=d;j++){
      string data=to_string(m)+to_string(j);
      bool jud=true;
      rep(k,data.size()){
        if(data[0]!=data[k])jud=false;
      }
      if(jud)ans++;
    }
  }
  cout<<ans<<nl;
}
