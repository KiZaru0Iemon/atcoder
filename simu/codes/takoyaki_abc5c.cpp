#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

//2分探索で調べる
int near_index(vector<int> &arr, int x)
{
  int a=0, b=arr.size()-1;
  int k;
  while(a<=b){
    k=(a+b)/2;
    if(arr[k]==x) return k;
    if(arr[k]>x) b=k-1;
    else a=k+1;
  }
  return (arr[k]>=x) ? k : ((k+1<(int)arr.size())?k+1:k);
}

int main()
{
  int T,N,M; cin>>T>>N;
  vector<int> A(N); rep(i,N)cin>>A[i];
  cin>>M;
  vector<int> B(M); rep(i,M)cin>>B[i];

  rep(i,M){
    //提供するたこ焼きがなければ終了
    if(A.size()==0){
      cout<<"no"<<endl;
      return 0;
    }
    //各客の到着時刻に応じて提供可能な最も前の時間より後にたこ焼きが焼きあがるのかを確認( O(log n))
    int tmp_idx=near_index(A,B[i]-T);
    //取得した時間が客を待たせないかを確認
    if(B[i]-T<=A[tmp_idx] && A[tmp_idx]<=B[i]){
      //提供したたこ焼きは配列から消す( O(n) )
      A.erase(A.begin()+tmp_idx);
    }else{
      //1人でも待たせる場合はnoを出力
      cout<<"no"<<endl;
      return 0;
    }
  }
  cout<<"yes"<<endl;

  return 0;
}
