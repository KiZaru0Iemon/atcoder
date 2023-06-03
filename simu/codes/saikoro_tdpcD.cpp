#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N;
ll D;
//やや余分に配列を構成
double tb[110][70][70][70];

//引数を因数分解して因数分解した結果とサイコロで作れそうな値なのかを判定
tuple<int,int,int,bool> factori(ll d)
{
  vector<int> arr={2,3,5};
  int ra[3]={0};
  rep(i,3){
    while(!(d%arr[i])){
      d/=arr[i];
      ra[i]++;
    }
  }
  bool yn=false;
  if(d!=1){
    yn=true;
  }
  return {ra[0],ra[1],ra[2],yn};
}

int main()
{
  cin>>N>>D;

  //構造化束縛を利用して因数分解の結果を取得
  auto [J,K,L,judge]=factori(D);

  //サイコロで作成できなそうであれば作れないので確率0で終了
  if(judge){
    cout<<0.0<<endl;
    return 0;
  }

  //0回サイコロ降った時の目の積は1になる
  tb[0][0][0][0]=1.0;

  //全パターン調べるのは大変なのでサイコロが作れそうな目についてのみ探索
  //(2,3,5の約数で構成されている数字のみ)
  rep(i,N){
    rep(j,60+1){
      rep(k,60+1){
        rep(l,60+1){
          if(tb[i][j][k][l]){
            tb[i+1][j][k][l]+=(tb[i][j][k][l]/6.0); //1
            tb[i+1][min(j+1,60)][k][l]+=(tb[i][j][k][l]/6.0); //2
            tb[i+1][j][min(k+1,60)][l]+=(tb[i][j][k][l]/6.0); //3
            tb[i+1][min(60,j+2)][k][l]+=(tb[i][j][k][l]/6.0); //4
            tb[i+1][j][k][min(60,l+1)]+=(tb[i][j][k][l]/6.0); //5
            tb[i+1][min(60,j+1)][min(60,k+1)][l]+=(tb[i][j][k][l]/6.0); //6
          }
        }
      }
    }
  }

  //Dが構成できる約数以上の結果は全てDで割れるので確率の総和をとる
  double res=0;
  for(int i=J;i<=60;i++){
    for(int j=K;j<=60;j++){
      for(int k=L;k<=60;k++){
          res+=tb[N][i][j][k];
  }}}

  printf("%.9lf\n",res);

  return 0;
}
