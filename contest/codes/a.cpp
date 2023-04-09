#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N,D; cin>>N>>D;
  int pre,now; cin>>pre;
  bool clear=false;
  rep(i,N-1){
    cin>>now;
    if(!clear && now-pre <= D){
      cout<<now<<endl;
      clear=true;
    }
    pre=now;
  }
  if(!clear)
    cout<<-1<<endl;

  return 0;
}
