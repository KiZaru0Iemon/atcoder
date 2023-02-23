#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N; cin>>N;
  vector<vector<int>> f(2,vector<int>(N));
  int i,j,k,cdy,max=-1;
  for(i=0;i<2;i++) {
    for(j=0;j<N;j++) {
      cin>>f[i][j];
    }
  }
  for(k=0;k<N;k++) {
    cdy=0;
    i=0;
    for(j=0;j<N;j++) {
      cdy+=f[i][j];
      if(j==k){
        i++;
        cdy+=f[i][j];
      }
    }
    if(max<cdy)max=cdy;
  }
  cout<<max<<endl;
}
