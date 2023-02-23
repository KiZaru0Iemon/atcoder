#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

pair<int,int> around(pair<int,int> p,int vec)
{
  switch(vec){
    case 0: p.first--; p.second--; break;
    case 1: p.first--; break;
    case 2: p.second--; break;
    case 3: p.second++; break;
    case 4: p.first++; break;
    case 5: p.first++; p.second++; break;
  }
  return p;
}

int main()
{
  int N; cin>>N;
  vector<pair<int,int>> bf(N);
  for(int i=0;i<N;i++)
    cin>>bf[i].first>>bf[i].second;
  sort(bf.begin(),bf.end());

  vector<int> gn(N,0);
  int c=1;

  bool flag;
  for(int i=0;i<N;i++){
    flag=true;
    if(gn[i]==0){
      gn[i]=c;
      for(int j=0;j<6;j++){
        for(int k=0;k<N;k++){
          if(around(bf[i],j)==bf[k]){
            if(gn[k]!=0){
              gn[i]=gn[k];
              flag=false;
            }
            else
              gn[k]=c;
          }
        }
      }
      if(flag)c++;
    }
  }

  cout<<endl;
  for(int i=0;i<N;i++){
    cout<<gn[i]<<endl;
  }
  cout<<endl;

  cout<<c-1<<endl;
}
