#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

vector<string> ans;

void comb_search(vector<string> s, string pa, int k)
{
  if(k==0){
    ans.push_back(pa);
    return;
  }

  k--;
  rep(i,s.size()){
    if(s[i]!="-1"){
      string tmp=s[i];
      s[i]="-1";
      comb_search(s,pa+tmp,k);
      s[i]=tmp;
    }
  }
}

int main()
{
  int n,k; cin>>n>>k;
  vector<string> s(n);
  rep(i,n)cin>>s[i];

  comb_search(s,"",k);
  sort(ans.begin(),ans.end());

  int num=0;
  string pre="";

  rep(i,ans.size()){
    if(pre!=ans[i]){
      num++;
    }
    pre=ans[i];
  }
  cout<<num<<endl;

  return 0;
}
