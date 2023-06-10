#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int tb[60][10010];

int main()
{
  int W,N,K; cin>>W>>N>>K;
  vector<int> wi(N),im(N);
  rep(i,N)cin>>wi[i]>>im[i];

  rep(i,N){
    for(int j=K;j>=0;j--){
      for(int w=W;w>=0;w--){
        if(wi[i]<=w)
          tb[j+1][w]=max(tb[j][w-wi[i]]+im[i],tb[j+1][w]);
      }
    }
  }

  int ans=-1;
  rep(j,K+1)
    rep(w,W+1)
      ans=max(ans,tb[j][w]);

  cout<<ans<<endl;

  return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//#define rep(i,e) for(int i=0;i<(int)(e);i++)
//using ll=long long int;
//using P=pair<int,int>;
//
//int tb[60][60][10010];
//
//int main()
//{
//  int W,N,K; cin>>W>>N>>K;
//  vector<int> wi(N),im(N);
//  rep(i,N)cin>>wi[i]>>im[i];
//
//  rep(i,N){
//    rep(j,K+1){
//      rep(w,W+1){
//        if(wi[i]<=w)
//          tb[i+1][j+1][w]=max(tb[i][j][w-wi[i]]+im[i],tb[i][j+1][w]);
//        else
//          tb[i+1][j+1][w]=tb[i][j+1][w];
//      }
//    }
//  }
//
//  int ans=-1;
//  rep(i,N+1){
//    rep(j,K+1){
//      rep(w,W+1){
//        ans=max(ans,tb[i][j][w]);
//      }}}
//  cout<<ans<<endl;
//
//  return 0;
//}
