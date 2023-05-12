#include <bits/stdc++.h>
using namespace std;
#define rep(i,e) for(int i=0;i<(int)(e);i++)
using ll=long long int;
using P=pair<int,int>;

int main()
{
  for(int i=0;i<10;i++){
    cout<<setw(7)<<i<<":"<<bitset<5>(i)<<endl;
    cout<<setw(7)<<setfill(' ')<<-i<<":"<<bitset<5>(-i)<<endl;
    cout<<setw(3)<<setfill(' ')<<i<<"&"<<setw(3)<<setfill(' ')<<-i<<":"<<bitset<5>(i&-i)<<endl;
    cout<<endl;
  }

  return 0;
}
