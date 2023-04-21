#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  int r=0;
  rep(i,N){
    char tmp; cin>>tmp;
    switch(tmp){
      case 'o': r++; break;
      case 'x': cout<<"No"<<endl; return 0;
      case '-': break;
    }
  }
  if(r>0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

  return 0;
}
