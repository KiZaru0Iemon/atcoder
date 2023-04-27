#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  int N; cin>>N;
  string S; cin>>S;

  int maxi=0;

  int counter=0;
  rep(i,N){
    if(S[i]=='o'){
      counter++;
    }
    else{
      maxi=max(counter,maxi);
      counter=0;
    }
  }

  if(counter>0){
    if(N-1-counter>=0){
      if(S[N-1-counter]=='-'){
        maxi=max(counter,maxi);
      }
    }
  }

  cout<<((maxi)?(maxi):(-1))<<endl;

  return 0;
}
