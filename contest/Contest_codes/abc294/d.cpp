#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,char>;

int binaryS(int se,vector<P> &arr,int n)
{
  int a=0, b=n-1;
  while(a<=b){
    int k=(a+b)/2;
    if(arr[k].f==se){
      return k;
    }
    if(arr[k].f > se)b=k-1;
    else a=k+1;
  }

  return -1;
}

int main()
{
  int N,Q;
  cin>>N>>Q;

  int fcalled=1;
  int head=0;
  vector<P> rp;
  vector<int> ans;

  rep(i,Q){
    int ev; cin>>ev;
    if(ev==1){ //受付列の追加
      rp.push_back((P){fcalled,1});
      fcalled++;
    }
    else if(ev==2){ //受付列からの要素削除、受付列の先頭情報更新
      int e2; cin>>e2;
      int di=binaryS(e2,rp,(int)rp.size());
      rp[di].s=0;
      if(di==head){
        while(head<(int)rp.size() && !rp[head].s)head++;
      }
    }
    else { //受付列の先頭呼び出し
      ans.push_back(rp[head].f);
    }
  }

  rep(i,(int)ans.size())
    cout<<ans[i]<<endl;

  return 0;
}
