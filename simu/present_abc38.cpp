#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

template <typename T>
class binary_indexed_tree {
//配列は0 startだがBITは1 startなので注意して処理する
public:
  vector<T> arr; //データを入れる木構造配列
  T unit; //初期化データ
  function<T (T,T)> append; //引数がT,T型かつ返却値T型の関数

  //bitの初期化constructer
  template <typename F>
  binary_indexed_tree(int n, T arr_unit, F arr_append):
    arr(n,arr_unit),
    unit(arr_unit),
    append(arr_append) //配列の更新時に使用するデータ比較用関数を設定
  {}

  //区間[0,k]の値を取得
  int initial_range_concat(int k) {
    T acc=unit; //初期値設定
    for(int i=k; i>0; i -= i&-i)
      acc=append(arr[i-1],acc);
    return acc;
  }

  //k番目のデータをwで更新
  void point_append(int k, T w) {
    for(int i=k+1; i<=(int)arr.size(); i += i&-i)
      arr[i-1]=append(arr[i-1],w);
  }
};

int main()
{
  int N; cin>>N;
  vector<P> box(N);
  rep(i,N) cin>>box[i].first>>box[i].second; //first:w, second:h

  sort(box.begin(),box.end());

  // hの最大値を調べる
  int max_h=0;
  rep(i,N)
    max_h=max(max_h,box[i].second);

  binary_indexed_tree<int> bit(max_h,0,[&](int a, int b){return max(a,b);});
  vector<int> tmp(N);

  rep(i,N){
    for(int j=i; (j<N)&&(box[i].first==box[j].first); j++)
      tmp[j]=bit.initial_range_concat(box[j].second)+1; //j番目の最大箱数を調べる

    int j;
    for(j=i; (j<N)&&(box[i].first==box[j].first); j++)
      bit.point_append(box[j].second,tmp[j]); //hの箱の最大箱数を更新

    i=j;
  }

  cout<<bit.initial_range_concat(max_h)<<endl;

  return 0;
}

