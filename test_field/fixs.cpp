#include <stdio.h>
using namespace std;
int main()
{
  int i;
  unsigned int stream=0x22a8bd79;

  for(i=0;i<32;i++){
    printf("%d ",((stream>>i)&1)?1:0);
    if(i%4==3)printf("| ");
  }
  printf("\n");

  int now=31;
  int length=0;
  int res;

  while(now>=0){
    if(((stream>>now)&1)==0)
      length++;
    else{
      res=0;
      now-=length;
      //if(now<0){
      //  length=length-now-1;
      //  now=0;
      //}
      //else
        length=length*2+1;
      for(i=0;i<length;i++){
        res+=((stream>>(now+i))&1)?(1<<i):0;
      }
      printf("%d ",res-1);
      length=0;
    }
    now--;
  }
  printf("\n");

  return 0;
}
