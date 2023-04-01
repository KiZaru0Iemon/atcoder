#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(e);i++)
using ll=long long int;
template<typename T1, typename T2>
class myp{public: T1 f; T2 s;};
using P=myp<int,int>;

int main()
{
  int N; cin>>N;
  vector<string> W(N);
  vector<string> set={"and","not","that","the","you"};
  rep(i,N)
    cin>>W[i];

  rep(i,N){
    rep(j,(int)set.size()){
      if(W[i]==set[j]){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
  }
  cout<<"No"<<endl;
 
  return 0;
}
