#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  string A; cin>>A;

  if(A[A.size()-1] > 'a'){
    A[A.size()-1]--;
    cout<<A<<endl;
  }
  else {
    if(A.size()!=1){
      A.pop_back();
      cout<<A<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }

  return 0;
}
