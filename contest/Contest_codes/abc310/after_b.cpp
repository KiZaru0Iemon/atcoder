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

  int N,M; cin>>N>>M;
  vi PA(N),C(N);
  vvi F(N);
  rep(i,N){
    cin>>PA[i]>>C[i];
    F[i]=vi(C[i]);
    rep(j,C[i])cin>>F[i][j];
  }

  rep(i,N){
    rep(j,N){

      if(i!=j){
        if(PA[i]<PA[j])continue;

        if(C[i] > C[j])continue;
        int num=0,kk=0;
        rep(k,C[i]){
          while(kk<C[j] && F[i][k]!=F[j][kk]){
            kk++;
          }
          if(kk<C[j] && F[i][k]==F[j][kk]){
            num++;
            kk++;
          }
        }
        if(num<C[i])continue;

        if(! (PA[i] > PA[j] || C[i]<C[j]) )
          continue;

        cout<<"Yes"<<nl;
        return 0;
      }

    }
  }

  cout<<"No"<<nl;
}
