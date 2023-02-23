#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int i,j;
  vector<vector<int>> d(N,vector<int>(3));
  int c[3]={0};
  for(i=0;i<N;i++){
    for(j=0;j<3;j++){
      cin >> d[i][j];
    }
  }
}
