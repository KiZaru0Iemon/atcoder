#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N,M;
vector<string> S;
int zz=0;

int string_diff(string &a, string &b){
  int num=0;
  rep(i,a.size())
    if(a[i]!=b[i])
      num++;
  return num;
}

void ans_search(vector<string> A,vector<string> B)
{
  for(int i=0;i<(int)B.size();i++){
    A.push_back(B[i]);
    string temp=B[i];
    B.erase(B.begin()+i);
    vector<string> T=B;
    B.insert(B.begin()+i,temp);
    if(A.size()!=S.size()){
      ans_search(A,T);
    }else{
      rep(k,A.size())
        cout<<A[k]<<endl;
      cout<<endl;
      int num=0;
      rep(j,N-1){
        if(string_diff(A[j],A[j+1])==1)
          num++;
      }
      if(num==N-1){
        cout<<"Yes"<<endl;
        exit(0);
      }
      cout<<zz++<<endl;
      return ;
    }
  }
}

int main()
{
  cin>>N>>M;
  S.resize(N);
  rep(i,N)cin>>S[i];

  ans_search({},S);
  cout<<"No"<<endl;

  return 0;
}
