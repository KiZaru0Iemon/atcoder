#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,x,n=0; cin>>a>>b>>x;
  for(int i=a;i<=b;i++)if(i%x==0)n++;
  cout<<n<<endl;
}
