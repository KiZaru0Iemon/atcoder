/* ~~~ binary indexed tree (BIT) ~~~ */
// データ取得 O(log(n))  n:配列長
// データ更新 O(log(n))  
#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

/* 配列は0 startだがBITは1 startなので注意して処理する */
template <typename T>
class binary_indexed_tree {
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

  //区間[1,k]の値を取得
  int initial_range_concat(int k) {
    T acc=unit; //初期値設定
    for(int i=k; i>0; i -= i&-i)
      acc=append(arr[i-1],acc);
    return acc;
  }

  //k番目のデータをwで更新
  void point_append(int k, T w) {
    for(int i=k; i<=(int)arr.size(); i += i&-i)
      arr[i-1]=append(arr[i-1],w);
  }
};

int main()
{

  return 0;
}
