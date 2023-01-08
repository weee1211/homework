#include <stdio.h>
#include <stdlib.h>

int re(long long int cunt){
  if(cunt==0||cunt==1)
    return cunt+1;
  else
    return re(cunt-1)+re((int)(cunt/2));
}
int main(void) {
  long long int cunt,ans;
  scanf("%lld",&cunt);
  ans=re(cunt);
  printf("%lld\n",ans);
  return 0;
}
