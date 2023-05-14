#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

vector<char> CS={'a','t','c','o','d','e','r'};

int main()
{
  string S,T; cin>>S>>T;
  vector<int> ms(27,0),mt(27,0);
  rep(i,S.size()){
    if(S[i]!='@')
      ms[S[i]-'a']++;
    else
      ms[26]++;

    if(T[i]!='@')
      mt[T[i]-'a']++;
    else
      mt[26]++;
  }

  int sd=0, td=0;
  rep(i,26){
    if(ms[i]!=mt[i]){
      int j;
      for(j=0;j<CS.size();j++){
        if(i == CS[j]-'a'){
          int dd = ms[i] - mt[i];
          if(dd>0){
            td+=dd;
          }else{
            sd+=-dd;
          }
          break;
        }
      }
      if(j==CS.size()){
        cout<<"No"<<endl;
        return 0;
      }
    }
  }

  cout<< ((ms[26]>=sd && mt[26]>=td)?"Yes":"No") <<endl;
  return 0;
}

