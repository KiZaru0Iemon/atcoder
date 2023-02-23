#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int* a;
  a=(int*)malloc(sizeof(int)*5);
  *a=(int*){1,2,3,4,5};

  for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
  cout<<endl;

  //a=(int[5]){5,4,3,2,1};

  for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
  cout<<endl;
}

void fuNc()
{
}
