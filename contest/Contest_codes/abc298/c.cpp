#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

#define MM 200001

int main()
{
  int N,Q; cin>>N>>Q;
  vector<vector<int>> box(MM);
  vector<vector<int>> card(MM);

  rep(l,Q){
    int i,j;
    int q; cin>>q;

    if(q==1){
      cin>>i>>j;
      box[j].push_back(i);
      card[i].push_back(j);
    }
    if(q==2){
      cin>>i;
      sort(box[i].begin(),box[i].end());
      rep(k,box[i].size())
        cout<<box[i][k]<<" ";
      cout<<endl;
    }
    if(q==3){
      cin>>i;
      sort(card[i].begin(),card[i].end());
      int pre=-1;
      rep(k,card[i].size()){
        if(pre!=card[i][k])
          cout<<card[i][k]<<" ";
        pre=card[i][k];
      }
      cout<<endl;
    }
  }

  return 0;
}

