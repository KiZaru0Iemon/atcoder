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
  vvi A(9,vi(9));
  rep(i,9)rep(j,9)cin>>A[i][j];
  rep(i,9)rep(j,9)A[i][j]--;

  rep(i,9){
    vb vid(9,false);
    rep(j,9){
      vid[A[i][j]]=true;
    }
    rep(j,9){
      if(!vid[j]){
        cout<<"No"<<nl;
        return 0;
      }
    }
  }

  rep(i,9){
    vb vid(9,false);
    rep(j,9){
      vid[A[j][i]]=true;
    }
    rep(j,9){
      if(!vid[j]){
        cout<<"No"<<nl;
        return 0;
      }
    }
  }

  rep(i,3){
    rep(j,3){
      vb vid(9,false);

      rep(k,3){
        rep(l,3){
          vid[A[i*3+k][j*3+l]]=true;
        }
      }

      rep(k,9){
        if(!vid[j]){
          cout<<"No"<<nl;
          return 0;
        }
      }

    }
  }

  cout<<"Yes"<<nl;
}
