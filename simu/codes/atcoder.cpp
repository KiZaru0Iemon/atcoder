#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  string S; cin>>S;
  string T="ACGT.";
  int i,j,c=0,maxi=0;
  for(i=0;i<S.size();i++){
    for(j=0;j<T.size();j++){
      if(S[i]==T[j]){
        c++;
        break;
      }
    }
    if(j==T.size()){
      if(maxi<c)maxi=c;
      c=0;
    }
  }
  if(maxi<c)maxi=c;
  cout<<maxi<<endl;
}
