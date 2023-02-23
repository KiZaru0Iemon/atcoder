#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N,K; cin>>N>>K;
  K*=pow(K-1,N-1);
  printf("%d\n",K);
}
