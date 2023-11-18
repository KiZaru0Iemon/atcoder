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
  int N,M; cin>>N>>M;
  string S,T; cin>>S>>T;

  rep(i,N){
    if(S[i]==T[0]){
      int num=0;
      rep(j,M)
        if(S[i+j]==T[j])
          num++;
      if(M==num)
        rep(j,M)
          S[i+j]='#';
      i+=(num-1);
    }
  }

  rep(i,N){
    if(S[i]!='#'){

      queue<int> now;
      rep(j,M){
        if(S[i]==T[j]){
          now.push(j);
        }
      }

      int ii;
      while(now.size()){
        int num=0;
        ii=i;
        ii-=now.front(); now.pop();
        if(ii>=0 && (ii+M)<N){
          rep(j,M)
            if(S[ii+j]=='#' || S[ii+j]==T[j])
              num++;
          if(M==num){
            rep(j,M)
              S[ii+j]='#';
            break;
          }
        }
      }

    }
  }

  rrep(i,N-1){
    if(S[i]!='#'){

      queue<int> now;
      rep(j,M){
        if(S[i]==T[j]){
          now.push(j);
        }
      }

      int ii;
      while(now.size()){
        int num=0;
        ii=i;
        ii-=now.front(); now.pop();
        if(ii>=0 && (ii+M)<N){
          rep(j,M)
            if(S[ii+j]=='#' || S[ii+j]==T[j])
              num++;
          if(M==num){
            rep(j,M)
              S[ii+j]='#';
            break;
          }
        }
      }

    }
  }

  rep(i,N)if(S[i]!='#'){
    cout<<"No"<<nl;
    return 0;
  }
  cout<<"Yes"<<nl;
}