#include <stdio.h>
#include <stdlib.h>

int main(void){
  int inh,inm,outh,outm,total,ans=0,flag=1;

  scanf("%d %d",&inh,&inm);
  scanf("%*c%d %d",&outh,&outm);
  if(outm<inm){
    outh-=1;
    outm+=60;
  }

  total=(60*(outh-inh))+(outm-inm);
  if (total<30){
    printf("0\n");
    flag=0;
  }
  if (total<=120){
    ans=30*((int)(total/30));
  }
  else if(total<=240){
    ans+=30*4;
    ans+=40*((int)(total-120)/30);
  }
  else if(total>240){
    ans+=30*4;
    ans+=40*4;

    ans+=60*((int)(total-240)/30);
  }
  if(flag==1){
    printf("%d\n",ans);
  }
return 0;
}
