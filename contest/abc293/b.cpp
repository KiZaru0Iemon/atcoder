#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  int A[N];
  bool called[N]={0};

  rep(i,N){
    int tmp; cin>>tmp; tmp--;
    A[i]=tmp;
  }

  rep(i,N){
    if(!called[i]){
      called[A[i]]=true;
    }
  }

  int num=0;
  vector<int> no;
  rep(i,N){
    if(!called[i]){
      num++;
      no.push_back(i);
    }
  }

  cout<<num<<endl;
  rep(i,no.size())cout<<(no[i]+1)<<" ";
  cout<<endl;

  return 0;
}
