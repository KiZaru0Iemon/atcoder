#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int N,D;
vector<char> visited;
vector<vector<char>> xyp;
queue<int> nextp;

double e_norm(P a,P b)
{
  return sqrt(pow((a.first-b.first),2)+pow((a.second-b.second),2));
}

int main()
{
  cin>>N>>D;

  return 0;
}
