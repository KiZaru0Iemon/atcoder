#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N,M;
bool flag=false;

int string_diff(string &a, string &b){
  int num=0;
  rep(i,a.size())
    if(a[i]!=b[i])
      num++;
  return num;
}

void ans_search(string cs, vector<string> S ,int num)
{
  rep(i,S.size()){
    if(string_diff(cs,S[i])==1){
      num++;
    }
    if(string_diff(cs,S[i])==1 || cs==""){
      string tmp=S[i];
      S.erase(S.begin()+i);
      ans_search(tmp,S,num);
      S.insert(S.begin()+i,tmp);
    }
  }
  if(num==N-1){
    flag=true;
  }
}

int main()
{
  cin>>N>>M;
  vector<string> S(N); rep(i,N)cin>>S[i];

  ans_search("",S,0);
  cout<<((flag)?"Yes":"No")<<endl;

  return 0;
}
