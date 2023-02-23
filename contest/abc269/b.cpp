#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  vector<string> f(10);
  int A=1000,B=-1,C=1000,D=-1;
  for(int i=0;i<10;i++)
    cin>>f[i];

  for(int i=0;i<10;i++) {
    for(int j=0;j<10;j++) {
      if(f[i][j]=='#') {
        A=min(i,A);
        C=min(j,C);
        B=max(i,B);
        D=max(j,D);
      }
    }
  }

  cout<<A+1<<" "<<B+1<<endl;
  cout<<C+1<<" "<<D+1<<endl;
}
